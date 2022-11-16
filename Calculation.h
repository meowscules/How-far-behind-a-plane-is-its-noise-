#pragma once
class Calculation
{
    private:
        float m_airplaneSpeed;
        float m_soundSpeed = 343.0;
        float m_obsFromPlaneDistance;

    public:
        Calculation();
        void setairplaneSpeed(float new_airplaneSpeed);
        void setobsFromPlaneDistance(float new_obsFromPlaneDistance);
    public:
        float getairplaneSpeed();
        float getobsFromPlaneDistance();
        float getsoundSpeed();
    public:
        float computing();

};

