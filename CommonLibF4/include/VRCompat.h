#pragma once

#include "REX/FModule.h"

namespace RE::BSGraphics
{
	[[nodiscard]] inline RendererData* GetRendererData() noexcept
	{
		return RendererData::GetSingleton();
	}
}
