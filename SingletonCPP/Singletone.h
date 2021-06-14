#pragma once
class Singletone
{
public:

	Singletone(const Singletone&) = delete;
	Singletone& operator=(Singletone&) = delete;
	Singletone(const Singletone&&) = delete;
	Singletone& operator=(Singletone&&) = delete;

	static Singletone& Instance();
	void Init();

	int Width{ 0 };
	int Height{ 0 };

private:
	Singletone() = default;
};

