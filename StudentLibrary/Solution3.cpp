#include "Solution3.h"
#include <iostream>
#include <algorithm>
#include <cctype> 

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	if (_words.empty()) {
		throw std::invalid_argument("Input vector is empty");
	}

	words = _words;
}

void Solution3::SortWords() {
    if (words.empty()) {
        throw std::logic_error("Words vector is empty");
    }

    std::sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {
        std::string aLower = a;
        std::string bLower = b;
        std::transform(aLower.begin(), aLower.end(), aLower.begin(), ::tolower);
        std::transform(bLower.begin(), bLower.end(), bLower.begin(), ::tolower);

        return aLower < bLower;
    });
}

std::vector<std::string> Solution3::GetSortedWords() const
{
	return words;
}

#endif
