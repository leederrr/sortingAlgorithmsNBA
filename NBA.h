/**
 * Name: McKenzie Kelley
 * Course: CS 124 Section A
*/

#ifndef NBA_H
#define NBA_H

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

/**
 * Class representing the NBA player performance statistics from the 1996
 * to 2021 basketball seasons. See https://www.kaggle.com/datasets/justinas/nba-players-data
 * for more information on the dataset/data collection.
 *
 * File fields with abbreviations:
 *  num_order: unique integer serial number list
 *  player_name: name of the NBA player
 *  team_abbreviation: abbreviation of the team name the player most recently has played for
 *  age: age of the player
 *  player_height: height of the player (in centimeters)
 *  gp: the number of games played throughout the season
 *  reb: average number of rebounds grabbed
 *  ast: average number of assists
 */

    class NBA {
    private:
        std::string player_name, team_abbreviation;
        int num_order, age, gp;
        double player_height, pts, reb, ast;

    public:
        // Constructors
        NBA() {
        }

        NBA(int num_order,
            std::string player_name,
            std::string team_abbreviation,
            int age,
            double player_height,
            int gp,
            double pts,
            double reb,
            double ast) {

            this->num_order = num_order;
            this->player_name = player_name;
            this->team_abbreviation = team_abbreviation;
            this->age = age;
            this->player_height = player_height;
            this->gp = gp;
            this->pts = pts;
            this->reb = reb;
            this->ast = ast;
        }

        // Getters
        int getNumOrder() const {
            return num_order;
        }

        int getAge() const {
            return age;
        }

        std::string getPlayerName() const {
            return player_name;
        }

        std::string getTeamAbbreviation() const {
            return team_abbreviation;
        }

        double getPlayerHeight() const {
            return player_height;
        }

        double getPoints() const {
            return pts;
        }

        double getGamesPlayed() const {
            return gp;
        }

        double getRebounds() const {
            return reb;
        }

        double getAssists() const {
            return ast;
        }

        // Setters
        void setNumOrder(int num_order) {
            this->num_order = num_order;
        }

        void setPlayerName(std::string player_name) {
            this->player_name = player_name;
        }

        void setTeamAbbreviation(std::string team_abbreviation) {
            this->team_abbreviation = team_abbreviation;
        }
        void setAge(int age) {
            this->age = age;
        }

        void setPlayerHeight(double player_height) {
            this->player_height = player_height;
        }
        void setGamesPlayed(int gp) {
            this->gp = gp;
        }

        void setPoints(double pts) {
            this->pts = pts;
        }

        void setGamesPlayed(double gp) {
            this->gp = gp;
        }

        void setRebounds(double reb) {
            this->reb = reb;
        }

        void setAssists(double ast) {
            this->ast = ast;
        }

        friend std::ostream &operator<<(std::ostream &outs, const NBA &newObj) {
            outs << std::fixed
                 << std::right
                 << std::setprecision(4)
                 << std::setw(6) << newObj.getNumOrder()
                 << std::setw(10) << newObj.getAge()
                 << std::left
                 << "  "
                 << std::setw(12) << newObj.getPlayerName()
                 << std::setw(14) << newObj.getTeamAbbreviation()
                 << std::setw(16) << newObj.getPoints()
                 << std::right
                 << std::setw(7) << newObj.getPlayerHeight()
                 << std::setw(10) << newObj.getGamesPlayed()
                 << std::setw(10) << newObj.getRebounds()
                 << std::setw(10) << newObj.getAssists();
            return outs;
        }
    };
    /**
     * Read data into a vector from CSV file; returns true if everything goes well; false otherwise.
     */
    bool loadFromFile(std::string fn, std::vector<NBA> &objs) {
        std::ifstream fIn;
        fIn.open(fn);

        if (!fIn) {
            // if the file cannot be opened
            return false;
        }

        if (fIn) {
            std::string header = "";
            getline(fIn, header);
        }

        // Read in data while the file is still good and haven't reached EOF
        int counter = 1;
        while (fIn && fIn.peek() != EOF) {
            int num_order = -1;
            std::string player_name = "INVALID";
            std::string team_abbreviation = "INVALID";
            int age = -1;
            double player_height = -1.0;
            int gp = -1;
            double pts = -1.0;
            double reb = -1.0;
            double ast = -1.0;
            char comma = ',';

            fIn >> num_order;  // Expects an int... reads an int.

            fIn >> comma;
            // These read a string; comma is delimiter.
            getline(fIn, player_name, comma);
            getline(fIn, team_abbreviation, comma);
            fIn >> age; // if age may be empty!
            if (!fIn) {
                age = -1;
                fIn.clear();
            }
            fIn >> comma;
            fIn >> player_height;
            fIn >> comma;
            fIn >> gp;
            fIn >> comma;
            fIn >> pts;
            fIn >> comma;
            fIn >> reb;
            fIn >> comma;
            fIn >> ast;


            NBA players(num_order, player_name, team_abbreviation, age,
                        player_height, gp, pts, reb,
                        ast);
            objs.push_back(players);
            counter += 1;
        }

        fIn.close(); // file handling
        return true;
    }

#endif