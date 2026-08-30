#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RectInt.h"

#define UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYCOL_OFFSET UNITYSDK_OFFSET(0x1EC05350)
#define UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYROW_OFFSET UNITYSDK_OFFSET(0x1EC052E0)
#define UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYTILES_OFFSET UNITYSDK_OFFSET(0x1EC05220)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TileLayoutUtils_TypeDefinitionIndex = 34943;

	class TileLayoutUtils : public ::System::Object
	{
	public:
		static ::System::Boolean TryLayoutByTiles(::UnityEngine::RectInt a1, ::System::UInt32 a2, ::UnityEngine::RectInt& a3, ::UnityEngine::RectInt& a4, ::UnityEngine::RectInt& a5, ::UnityEngine::RectInt& a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectInt, ::System::UInt32, ::UnityEngine::RectInt&, ::UnityEngine::RectInt&, ::UnityEngine::RectInt&, ::UnityEngine::RectInt&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYTILES_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean TryLayoutByRow(::UnityEngine::RectInt a1, ::System::UInt32 a2, ::UnityEngine::RectInt& a3, ::UnityEngine::RectInt& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectInt, ::System::UInt32, ::UnityEngine::RectInt&, ::UnityEngine::RectInt&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYROW_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryLayoutByCol(::UnityEngine::RectInt a1, ::System::UInt32 a2, ::UnityEngine::RectInt& a3, ::UnityEngine::RectInt& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectInt, ::System::UInt32, ::UnityEngine::RectInt&, ::UnityEngine::RectInt&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYCOL_OFFSET))(a1, a2, a3, a4);
		}
	};
}
