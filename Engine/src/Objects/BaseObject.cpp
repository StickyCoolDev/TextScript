#include "Objects/BaseObject.h"

#include "pch.h"

std::string hash(const std::string& data) {
    std::hash<std::string> hasher;
    size_t hashed_value = hasher(data);

    std::stringstream ss;
    ss << std::hex << std::setw(16) << std::setfill('0') << hashed_value;
    return ss.str();
}

std::string generateUniqueId() {

    auto now = std::chrono::high_resolution_clock::now();
    auto timestamp = now.time_since_epoch().count();

    std::random_device rd;
    std::mt19937_64 generator(rd());
    std::uniform_int_distribution<unsigned long long> distribution;

    unsigned long long random_value = distribution(generator);

    std::stringstream ss;
    ss << timestamp << "-" << random_value;


    return hash(ss.str());
}

namespace TextScript {
  BaseObject::BaseObject(std::string name, int x, int y)
    : m_Name(name), X(x), Y(y){
    m_ID = generateUniqueId();
  }
}
