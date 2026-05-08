#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/TextureSheetRenderer_TexBlendMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/TextureSheetRenderer_TexChannel.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Action; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ArcadeTextureSheetConfig; }
namespace UnityEngine::Rendering::Universal { class IArcadeSheetConfig; }
namespace UnityEngine::Rendering::Universal { class TextureSheetConfig; }
namespace UnityEngine::Rendering::Universal { class TextureSheetRenderer_FXParams; }

#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1914FD00)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1914EA40)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_GET_M_SHEETCONFIG_OFFSET UNITYSDK_OFFSET(0x1914D080)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_IGNORESETFXCONFIGS_OFFSET UNITYSDK_OFFSET(0x1914EA50)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1914E290)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1914E4D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1914D0D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1914E920)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_PLAY_OFFSET UNITYSDK_OFFSET(0x1914DCF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_REFRESHORDER_OFFSET UNITYSDK_OFFSET(0x1914E590)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_RESUME_OFFSET UNITYSDK_OFFSET(0x1914E970)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_SETFXCONFIGS_OFFSET UNITYSDK_OFFSET(0x1914EC00)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_SETORDER_OFFSET UNITYSDK_OFFSET(0x1914E540)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_SETSPRITERENDER_OFFSET UNITYSDK_OFFSET(0x1914D330)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_SETTEXTUREANDTILES_OFFSET UNITYSDK_OFFSET(0x1914E730)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_STOP_OFFSET UNITYSDK_OFFSET(0x1914E9C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_TICK_OFFSET UNITYSDK_OFFSET(0x1914DDC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1914DD70)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1914FE60)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TextureSheetRenderer_TypeDefinitionIndex = 29899;

	class TextureSheetRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Mesh** StaticGet_s_QuadMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(TextureSheetRenderer_TypeDefinitionIndex)->GetStaticField(0x24470);
		}
		::UnityEngine::Rendering::Universal::ArcadeTextureSheetConfig* m_ConfigsArcade; // 0x18
		::System::Action* m_frameEndCallBack; // 0x20
		::UnityEngine::Rendering::Universal::TextureSheetConfig* m_Configs; // 0x28
		::System::Boolean m_FlipX; // 0x30
		::System::Boolean m_FlipY; // 0x31
		::System::Int32 m_Order; // 0x34
		::UnityEngine::Vector2 m_LocalScale; // 0x38
		::System::Int32 previewIndex; // 0x40
		::System::Boolean m_AutoPlay; // 0x44
		::System::Boolean m_IsEnable; // 0x45
		::UnityEngine::Color m_FxOverrideColor; // 0x48
		::UnityEngine::Texture* m_FxOverrideTex; // 0x58
		::UnityEngine::Rendering::Universal::TextureSheetRenderer_TexChannel m_FxOverrideTexChannel; // 0x60
		::UnityEngine::Color m_FxOverrideTexColor; // 0x64
		::UnityEngine::Rendering::Universal::TextureSheetRenderer_TexBlendMode m_FxOverrideTexBlendMode; // 0x74
		::UnityEngine::Vector2 m_FxOverrideTexUVSpeed; // 0x78
		::UnityEngine::Vector4 m_FxOverrideTexScaleOffset; // 0x80
		::System::Single m_FxOutlineWidth; // 0x90
		::UnityEngine::Color m_FxOutlineColor; // 0x94
		::System::Single m_FxBackLightRange; // 0xA4
		::UnityEngine::Color m_FxBackLightColor; // 0xA8
		::UnityEngine::Texture* m_FxBackLightTex; // 0xB8
		::UnityEngine::Rendering::Universal::TextureSheetRenderer_TexChannel m_FxBackLightTexChannel; // 0xC0
		::UnityEngine::Rendering::Universal::TextureSheetRenderer_TexBlendMode m_FxBackLightTexBlendMode; // 0xC4
		::UnityEngine::Vector2 m_FxBackLightTexUVSpeed; // 0xC8
		::UnityEngine::Vector4 m_FxBackLightTexScaleOffset; // 0xD0
		::System::Single m_Desaturate; // 0xE0
		::UnityEngine::Texture* m_DesaturateMask; // 0xE8
		::System::Single passTime; // 0xF0
		::System::Int32 m_OldOrder; // 0xF4
		::System::Boolean m_Play; // 0xF8
		::UnityEngine::MaterialPropertyBlock* m_MaterialPropertyBlock; // 0x100
		::UnityEngine::MeshRenderer* m_MeshRender; // 0x108
		::UnityEngine::MeshFilter* m_MeshFilter; // 0x110
		::System::Boolean m_IgnoreSetFxConfigs; // 0x118
		::UnityEngine::Rendering::Universal::TextureSheetRenderer_FXParams* fxParams; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::IArcadeSheetConfig* get_m_SheetConfig()
		{
			return ((::UnityEngine::Rendering::Universal::IArcadeSheetConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_GET_M_SHEETCONFIG_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetOrder(::System::Int32 targetOrder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_SETORDER_OFFSET))(this, targetOrder);
		}

		::System::Void SetTextureAndTiles(::UnityEngine::Texture2D* texture, ::UnityEngine::Vector2Int v2, ::System::Int32 num, ::System::Int32 speed, ::System::Boolean loop)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Vector2Int, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_SETTEXTUREANDTILES_OFFSET))(this, texture, v2, num, speed, loop);
		}

		::System::Void Play(::System::Int32 startFrameIndex, ::System::Action* callBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_PLAY_OFFSET))(this, startFrameIndex, callBack);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_RESUME_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_STOP_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Void IgnoreSetFxConfigs(::System::Boolean ignore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_IGNORESETFXCONFIGS_OFFSET))(this, ignore);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void SetSpriteRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_SETSPRITERENDER_OFFSET))(this);
		}

		::System::Void RefreshOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_REFRESHORDER_OFFSET))(this);
		}

		::System::Void SetFxConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_SETFXCONFIGS_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_CLEAR_OFFSET))(this);
		}
	};
}
