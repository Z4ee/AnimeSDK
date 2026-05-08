#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering::Universal { class IArcadeSheetConfig; }

#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B36FEE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_ENDFRAME_OFFSET UNITYSDK_OFFSET(0x1B36FE10)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_ITEMPIVOTCENTER_OFFSET UNITYSDK_OFFSET(0x1B36FE30)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1B36FE50)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1B36FE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1B36FE40)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_STARTFRAME_OFFSET UNITYSDK_OFFSET(0x1B36FE00)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_TEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x1B36FDE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_TILES_OFFSET UNITYSDK_OFFSET(0x1B36FDF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_INIT_OFFSET UNITYSDK_OFFSET(0x1B36FC10)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_REBUILD_OFFSET UNITYSDK_OFFSET(0x1B36FE60)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B36FF20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TextureSheetConfig_TypeDefinitionIndex = 29897;

	class TextureSheetConfig : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* m_TextureSheet; // 0x10
		::UnityEngine::Vector2Int m_Tiles; // 0x18
		::System::Int32 m_StartFrame; // 0x20
		::System::Int32 m_EndFrame; // 0x24
		::UnityEngine::Vector2 size; // 0x28
		::UnityEngine::Vector2 itemPivotCenter; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_INIT_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_TextureSheet()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_TEXTURESHEET_OFFSET))(this);
		}

		::UnityEngine::Vector2Int get_Tiles()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_TILES_OFFSET))(this);
		}

		::System::Int32 get_StartFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_STARTFRAME_OFFSET))(this);
		}

		::System::Int32 get_EndFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_ENDFRAME_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_Size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_SIZE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_ItemPivotCenter()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_ITEMPIVOTCENTER_OFFSET))(this);
		}

		::System::Int32 get_Speed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_SPEED_OFFSET))(this);
		}

		::System::Boolean get_Loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_GET_LOOP_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::IArcadeSheetConfig* ReBuild(::UnityEngine::Texture2D* textureSheet, ::UnityEngine::Vector2Int tiles, ::System::Int32 num, ::System::Int32 speed, ::System::Boolean loop)
		{
			return ((::UnityEngine::Rendering::Universal::IArcadeSheetConfig*(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Vector2Int, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_REBUILD_OFFSET))(this, textureSheet, tiles, num, speed, loop);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETCONFIG_CLEAR_OFFSET))(this);
		}
	};
}
