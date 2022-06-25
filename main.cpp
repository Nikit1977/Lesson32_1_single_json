#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {
    json cinema
            {
                    {"name",        "Inglourious Basterds"},
                    {"director",    "Quentin Tarantino"},
                    {"producer",    "Lawrence Bender"},
                    {"writer",      "Quentin Tarantino"},
                    {"country",     "USA"},
                    {"Distributor", "Weinstein Co."},
                    {"release",     "21/08/2009"},

                    {"cast&crew",   {{"Brad Pitt", "Lt. Aldo Raine"}, {"Melanie Laurent", "Shosanna Dreyfus"},
                                            {"Christoph Waltz", "Col. Hans Landa"}, {"Eli Roth", "Sgt. Donny Donowitz"},
                                            {"Michael Fassbender", "Lt. Archie Hicox"}, {"Daniel Bruhl", "Fredrick Zoller"},
                                            {"Til Schweiger", "Sgt. Hugo Stiglitz"}, {"Diane Kruger", "Bridget von Hammersmark"},
                                            {"Mike Myers", "Gen. Ed Fenech"}, {"Omar Doom", "Pfc. Omar Ulmer"}}}
            };

    //std::cout << std::setw(4) << cinema << std::endl;

    std::ofstream file("cinema.json");
    if (file.is_open()) {
        file << cinema;
        file.close();
    } else {
        std::cout << "Cant open file" << std::endl;
    }

    return 0;
}