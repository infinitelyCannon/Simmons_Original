// Fill out your copyright notice in the Description page of Project Settings.

#include "UtilityBPs.h"
#include <direct.h>
#include <string>

FString UUtilityBPs::GetWorkingDirectory()
{
	char buffer[FILENAME_MAX];
	int end;

	_getcwd(buffer, FILENAME_MAX);

	std::string value(buffer);

	int spot = value.find("C:\\Users");

	if (spot != std::string::npos)
	{
		for (size_t i = 9; i < value.length; ++i)
		{
			if (value[i] == '\\')
			{
				end = (int) i;
				i = value.length;
			}
		}
	}

	value.replace(9, end - 9, "[CLASSIFIED]");

	FString result(value.c_str());

	return result;
}