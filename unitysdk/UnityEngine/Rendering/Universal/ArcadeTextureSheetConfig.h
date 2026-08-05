#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering::Universal { class IArcadeSheetConfig; }

#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DDF5160)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_ENDFRAME_OFFSET UNITYSDK_OFFSET(0x1DDF5020)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_ITEMPIVOTCENTER_OFFSET UNITYSDK_OFFSET(0x1DDF5060)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1DDF50A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1DDF5040)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1DDF5080)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_STARTFRAME_OFFSET UNITYSDK_OFFSET(0x1DDF5000)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_TEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x1DDF4FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_TILES_OFFSET UNITYSDK_OFFSET(0x1DDF4FE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_INIT_OFFSET UNITYSDK_OFFSET(0x1DDF4DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_REBUILD_OFFSET UNITYSDK_OFFSET(0x1DDF50C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_ENDFRAME_OFFSET UNITYSDK_OFFSET(0x1DDF5030)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_ITEMPIVOTCENTER_OFFSET UNITYSDK_OFFSET(0x1DDF5070)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1DDF50B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1DDF5050)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x1DDF5090)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_STARTFRAME_OFFSET UNITYSDK_OFFSET(0x1DDF5010)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_TEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x1DDF4FD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_TILES_OFFSET UNITYSDK_OFFSET(0x1DDF4FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF51C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ArcadeTextureSheetConfig_TypeDefinitionIndex = 27948;

	class ArcadeTextureSheetConfig : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* _TextureSheet_k__BackingField; // 0x10
		::UnityEngine::Vector2 _ItemPivotCenter_k__BackingField; // 0x18
		::System::Int32 _Speed_k__BackingField; // 0x20
		::System::Int32 _StartFrame_k__BackingField; // 0x24
		::System::Int32 _EndFrame_k__BackingField; // 0x28
		::System::Boolean _Loop_k__BackingField; // 0x2C
		::UnityEngine::Vector2Int _Tiles_k__BackingField; // 0x30
		::UnityEngine::Vector2 _Size_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::ArcadeTextureSheetConfig* Init(::System::Int32 num)
		{
			return ((::UnityEngine::Rendering::Universal::ArcadeTextureSheetConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_INIT_OFFSET))(this, num);
		}

		::UnityEngine::Texture2D* get_TextureSheet()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_TEXTURESHEET_OFFSET))(this);
		}

		::System::Void set_TextureSheet(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_TEXTURESHEET_OFFSET))(this, value);
		}

		::UnityEngine::Vector2Int get_Tiles()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_TILES_OFFSET))(this);
		}

		::System::Void set_Tiles(::UnityEngine::Vector2Int value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_TILES_OFFSET))(this, value);
		}

		::System::Int32 get_StartFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_STARTFRAME_OFFSET))(this);
		}

		::System::Void set_StartFrame(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_STARTFRAME_OFFSET))(this, value);
		}

		::System::Int32 get_EndFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_ENDFRAME_OFFSET))(this);
		}

		::System::Void set_EndFrame(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_ENDFRAME_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_SIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_ItemPivotCenter()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_ITEMPIVOTCENTER_OFFSET))(this);
		}

		::System::Void set_ItemPivotCenter(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_ITEMPIVOTCENTER_OFFSET))(this, value);
		}

		::System::Int32 get_Speed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_SPEED_OFFSET))(this, value);
		}

		::System::Boolean get_Loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_Loop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_LOOP_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::Universal::IArcadeSheetConfig* ReBuild(::UnityEngine::Texture2D* textureSheet, ::UnityEngine::Vector2Int tiles, ::System::Int32 num, ::System::Int32 speed, ::System::Boolean loop)
		{
			return ((::UnityEngine::Rendering::Universal::IArcadeSheetConfig*(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Vector2Int, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_REBUILD_OFFSET))(this, textureSheet, tiles, num, speed, loop);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_CLEAR_OFFSET))(this);
		}
	};
}
