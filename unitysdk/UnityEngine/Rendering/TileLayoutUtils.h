#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RectInt.h"

#define UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYCOL_OFFSET UNITYSDK_OFFSET(0x1CA7CE70)
#define UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYROW_OFFSET UNITYSDK_OFFSET(0x1CA7CDC0)
#define UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYTILES_OFFSET UNITYSDK_OFFSET(0x1CA7CC90)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TileLayoutUtils_TypeDefinitionIndex = 18738;

	class TileLayoutUtils : public ::System::Object
	{
	public:
		static ::System::Boolean TryLayoutByTiles(::UnityEngine::RectInt src, ::System::UInt32 tileSize, ::UnityEngine::RectInt& main, ::UnityEngine::RectInt& topRow, ::UnityEngine::RectInt& rightCol, ::UnityEngine::RectInt& topRight)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectInt, ::System::UInt32, ::UnityEngine::RectInt&, ::UnityEngine::RectInt&, ::UnityEngine::RectInt&, ::UnityEngine::RectInt&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYTILES_OFFSET))(src, tileSize, main, topRow, rightCol, topRight);
		}

		static ::System::Boolean TryLayoutByRow(::UnityEngine::RectInt src, ::System::UInt32 tileSize, ::UnityEngine::RectInt& main, ::UnityEngine::RectInt& other)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectInt, ::System::UInt32, ::UnityEngine::RectInt&, ::UnityEngine::RectInt&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYROW_OFFSET))(src, tileSize, main, other);
		}

		static ::System::Boolean TryLayoutByCol(::UnityEngine::RectInt src, ::System::UInt32 tileSize, ::UnityEngine::RectInt& main, ::UnityEngine::RectInt& other)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectInt, ::System::UInt32, ::UnityEngine::RectInt&, ::UnityEngine::RectInt&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYCOL_OFFSET))(src, tileSize, main, other);
		}
	};
}
