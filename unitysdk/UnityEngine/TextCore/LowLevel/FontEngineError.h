#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int FontEngineError_TypeDefinitionIndex = 5829;

	enum class FontEngineError : ::System::Int32
	{
		Success = 0,
		Invalid_File_Path = 1,
		Invalid_File_Format = 2,
		Invalid_File_Structure = 3,
		Invalid_File = 4,
		Invalid_Table = 8,
		Invalid_Glyph_Index = 16,
		Invalid_Character_Code = 17,
		Invalid_Pixel_Size = 23,
		Invalid_Library = 33,
		Invalid_Face = 35,
		Invalid_Library_or_Face = 41,
		Atlas_Generation_Cancelled = 100,
		Invalid_SharedTextureData = 101,
	};
}
