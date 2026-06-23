#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering::Universal { class IArcadeSheetConfig; }

#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C998A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_ENDFRAME_OFFSET UNITYSDK_OFFSET(0x1C998930)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_ITEMPIVOTCENTER_OFFSET UNITYSDK_OFFSET(0x1C998970)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1C9989B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1C998950)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1C998990)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_STARTFRAME_OFFSET UNITYSDK_OFFSET(0x1C998910)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_TEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x1C9988D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_GET_TILES_OFFSET UNITYSDK_OFFSET(0x1C9988F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_INIT_OFFSET UNITYSDK_OFFSET(0x1C9986F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_REBUILD_OFFSET UNITYSDK_OFFSET(0x1C9989D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_ENDFRAME_OFFSET UNITYSDK_OFFSET(0x1C998940)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_ITEMPIVOTCENTER_OFFSET UNITYSDK_OFFSET(0x1C998980)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1C9989C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1C998960)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x1C9989A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_STARTFRAME_OFFSET UNITYSDK_OFFSET(0x1C998920)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_TEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x1C9988E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG_SET_TILES_OFFSET UNITYSDK_OFFSET(0x1C998900)
#define UNITYENGINE_RENDERING_UNIVERSAL_ARCADETEXTURESHEETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C998AE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ArcadeTextureSheetConfig_TypeDefinitionIndex = 27220;

	class ArcadeTextureSheetConfig : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* _TextureSheet_k__BackingField; // 0x10
		::System::Boolean _Loop_k__BackingField; // 0x18
		::System::Int32 _Speed_k__BackingField; // 0x1C
		::UnityEngine::Vector2 _Size_k__BackingField; // 0x20
		::System::Int32 _StartFrame_k__BackingField; // 0x28
		::UnityEngine::Vector2 _ItemPivotCenter_k__BackingField; // 0x2C
		::UnityEngine::Vector2Int _Tiles_k__BackingField; // 0x34
		::System::Int32 _EndFrame_k__BackingField; // 0x3C

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
