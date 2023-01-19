#ifndef MARKOV_HPP
#define MARKOV_HPP

class Markov
{
    public:
        bool load_data();
        bool train(const std::string& dataset_path);
        bool generate();

    private:
        enum class ERROR_CODE : std::uint8_t
        {
            FILE_OPEN_FAIL 
        };

        ERROR_CODE err_code;

};


#endif