/**
 * copyright (c) 2019, <NAME>
 */
#include "ex4_4.h"  // NOLINT

UserProfile::UserProfile(string name, Level level):m_userName(name), m_level(level) {
  m_ID = s_ID++;
}

bool UserProfile::operator==(const UserProfile& rhs) const {
    if (this == &rhs) {
        return true;
    }
    if (m_ID == rhs.m_ID && m_userName == rhs.m_userName && m_level == rhs.m_level) {
        return true;
    }
    return false;
}

bool UserProfile::operator!=(const UserProfile& rhs) const {
     return !(*this == rhs); }

bool UserProfile::CalculateAccuracy() {
    m_Accuracy = m_guessNums*1.0 / m_guessRightNums;
     return true; }
