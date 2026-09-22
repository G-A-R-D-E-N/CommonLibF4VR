#pragma once

#include <RE/Fallout.h>

#include <Windows.h>

namespace REX::FModule
{
	[[nodiscard]] inline bool IsRuntimeOG() noexcept
	{
		return false;
	}

	[[nodiscard]] inline bool IsRuntimeNG() noexcept
	{
		return false;
	}

	[[nodiscard]] inline bool IsRuntimeAE() noexcept
	{
		return false;
	}

	[[nodiscard]] inline bool IsRuntimeVR() noexcept
	{
		return REL::Module::IsVR();
	}

	[[nodiscard]] inline void* GetExecutingModule() noexcept
	{
		return reinterpret_cast<void*>(REL::Module::get().base());
	}
}
