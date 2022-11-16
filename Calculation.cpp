#include "calculation.h"

void Calculation::setairplaneSpeed(float new_airplaneSpeed)
{
    m_airplaneSpeed = new_airplaneSpeed;
}

void Calculation::setobsFromPlaneDistance(float new_obsFromPlaneDistance)
{
    m_obsFromPlaneDistance = new_obsFromPlaneDistance;
}

float Calculation::getairplaneSpeed()
{
    return m_airplaneSpeed;
}

float Calculation::getobsFromPlaneDistance()
{
    return m_obsFromPlaneDistance;
}

float Calculation::computing()
{
    return (this->m_obsFromPlaneDistance * this->m_airplaneSpeed / this->m_soundSpeed);
}

Calculation::Calculation()
{

}