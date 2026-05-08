#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RangeInt.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering::Universal { class NapCharacterGIBakeSettings; }
namespace UnityEngine::Rendering::Universal { class NapCharacterGIWeather; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGI_GETLAYERRANGE_1_OFFSET UNITYSDK_OFFSET(0x1B08B620)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGI_GETLAYERRANGE_OFFSET UNITYSDK_OFFSET(0x1B08B4F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGI_INDEX2DTOINDEX_OFFSET UNITYSDK_OFFSET(0x1B08B740)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGI_INDEXTOINDEX2D_OFFSET UNITYSDK_OFFSET(0x1B08B6E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGI_RECALCULATEBASICPARAMS_OFFSET UNITYSDK_OFFSET(0x1B08B3F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B08B7A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCharacterGI_TypeDefinitionIndex = 30055;

	class NapCharacterGI : public ::System::Object
	{
	public:
		::System::Boolean enabled; // 0x10
		::UnityEngine::Rendering::Universal::NapCharacterGIBakeSettings* settings; // 0x18
		::UnityEngine::Rect rect; // 0x20
		::UnityEngine::Rect rectForCulling; // 0x30
		::System::Int32 rowSize; // 0x40
		::System::Int32 colSize; // 0x44
		::System::Int32 tileCount; // 0x48
		::Il2CppArray<::System::Int32>* tileDataOffsets; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* positions; // 0x58
		::Il2CppArray<::UnityEngine::Rendering::Universal::NapCharacterGIWeather*>* weathers; // 0x60
		::System::Int32 currentWeatherIndex; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGI__CTOR_OFFSET))(this);
		}

		::System::Void ReCalculateBasicParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGI_RECALCULATEBASICPARAMS_OFFSET))(this);
		}

		::UnityEngine::RangeInt GetLayerRange(::UnityEngine::Vector2Int pos2d)
		{
			return ((::UnityEngine::RangeInt(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGI_GETLAYERRANGE_OFFSET))(this, pos2d);
		}

		::UnityEngine::RangeInt GetLayerRange_1(::System::Int32 index)
		{
			return ((::UnityEngine::RangeInt(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGI_GETLAYERRANGE_1_OFFSET))(this, index);
		}

		::UnityEngine::Vector2Int IndexToIndex2D(::System::Int32 index)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGI_INDEXTOINDEX2D_OFFSET))(this, index);
		}

		::System::Int32 Index2DToIndex(::UnityEngine::Vector2Int pos2d)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGI_INDEX2DTOINDEX_OFFSET))(this, pos2d);
		}
	};
}
