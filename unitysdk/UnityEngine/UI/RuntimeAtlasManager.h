#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/UI/SpriteElement.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class RuntimeAtlasManager_FontTex; }
namespace UnityEngine::UI { class RuntimeAtlasManager_PackedAtlas; }
namespace UnityEngine::UI { class RuntimeAtlasManager_RuntimeAtlas; }

#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_ERASEIMPL_OFFSET UNITYSDK_OFFSET(0x1B3DC010)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_ERASE_OFFSET UNITYSDK_OFFSET(0x1B3AC280)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_GET_FULLSCREENMESH_OFFSET UNITYSDK_OFFSET(0x1B3DFD20)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_INSERTIMPL_OFFSET UNITYSDK_OFFSET(0x1B3DB7B0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_INSERT_OFFSET UNITYSDK_OFFSET(0x1B3AC720)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_REGISTERFONTTEXIMPL_OFFSET UNITYSDK_OFFSET(0x1B3DC280)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_REGISTERFONTTEX_OFFSET UNITYSDK_OFFSET(0x1B3DC1F0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B3DE7C0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETFONTTEXINFOIMPL_OFFSET UNITYSDK_OFFSET(0x1B3DC750)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETFONTTEXINFO_OFFSET UNITYSDK_OFFSET(0x1B3DC6A0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETTEXINFOIMPL_OFFSET UNITYSDK_OFFSET(0x1B3DBDC0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETTEXINFO_OFFSET UNITYSDK_OFFSET(0x1B3AD0D0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETTEX_OFFSET UNITYSDK_OFFSET(0x1B3A4CF0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_UNLOADUNUSED_OFFSET UNITYSDK_OFFSET(0x1B3DF040)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPDATEAVAILABLEIMPL_OFFSET UNITYSDK_OFFSET(0x1B3DF050)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPDATEAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B3DF600)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPDATEFONTTEXIMPL_OFFSET UNITYSDK_OFFSET(0x1B3E00F0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPLOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B3DF950)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3E03C0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3DC9C0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RuntimeAtlasManager_TypeDefinitionIndex = 5968;

	class RuntimeAtlasManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Mesh** StaticGet_s_FullscreenMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RuntimeAtlasManager_TypeDefinitionIndex)->GetStaticField(0x46780);
		}
		static ::UnityEngine::Sprite** StaticGet_defaultSprite()
		{
			return (::UnityEngine::Sprite**)Il2CppClass::FromTypeDefinitionIndex(RuntimeAtlasManager_TypeDefinitionIndex)->GetStaticField(0x46788);
		}
		static ::UnityEngine::UI::RuntimeAtlasManager** StaticGet_s_Instance()
		{
			return (::UnityEngine::UI::RuntimeAtlasManager**)Il2CppClass::FromTypeDefinitionIndex(RuntimeAtlasManager_TypeDefinitionIndex)->GetStaticField(0x46790);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_InsertMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(RuntimeAtlasManager_TypeDefinitionIndex)->GetStaticField(0xCBE0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_UploadTexMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(RuntimeAtlasManager_TypeDefinitionIndex)->GetStaticField(0xCBE8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_QueryMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(RuntimeAtlasManager_TypeDefinitionIndex)->GetStaticField(0xCBF0);
		}
		// static const ::System::Int32 k_UpdateInterval = 0x12C; // 0x0
		// static const ::System::Int32 k_RuntimeAtlasCount = 0x2; // 0x0
		// static const ::System::Int32 k_PackedAtlasCount = 0x4; // 0x0
		// static const ::System::Int32 k_FontTexCount = 0x2; // 0x0
		::UnityEngine::ComputeShader* m_CopyShader; // 0x10
		::UnityEngine::Material* m_CopyMat; // 0x18
		::UnityEngine::Texture* m_ClearTex; // 0x20
		::System::Int32 m_LastUpdateFrame; // 0x28
		::System::Collections::Generic::HashSet_1<::UnityEngine::UI::Graphic*>* m_TrackedGraphic; // 0x30
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_DefaultFormat; // 0x38
		::Il2CppArray<::UnityEngine::UI::RuntimeAtlasManager_PackedAtlas*>* m_PackedAtlas; // 0x40
		::Il2CppArray<::UnityEngine::UI::RuntimeAtlasManager_FontTex*>* m_FontTex; // 0x48
		::Il2CppArray<::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas*>* m_RuntimeAtlas; // 0x50
		::Il2CppArray<::System::Int32>* k_PackedAtlasTexID; // 0x58
		::Il2CppArray<::System::Int32>* k_FontTexID; // 0x60

		::System::Void _ctor(::UnityEngine::ComputeShader* a1, ::UnityEngine::Material* a2, ::UnityEngine::Texture* a3, ::UnityEngine::Sprite* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::UnityEngine::Material*, ::UnityEngine::Texture*, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean Insert(::UnityEngine::Sprite* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Sprite*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_INSERT_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryGetTexInfo(::UnityEngine::UI::SpriteElement& a1, ::UnityEngine::Shader* a2, ::UnityEngine::UI::Graphic* a3, ::UnityEngine::Texture*& a4, ::UnityEngine::Vector2& a5, ::UnityEngine::Vector2& a6, ::System::Int32& a7)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::SpriteElement&, ::UnityEngine::Shader*, ::UnityEngine::UI::Graphic*, ::UnityEngine::Texture*&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETTEXINFO_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean TryGetTex(::UnityEngine::UI::SpriteElement& a1, ::UnityEngine::Texture*& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::SpriteElement&, ::UnityEngine::Texture*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETTEX_OFFSET))(a1, a2);
		}

		static ::System::Void Erase(::UnityEngine::UI::SpriteElement& a1, ::UnityEngine::UI::Graphic* a2)
		{
			return ((::System::Void(*)(::UnityEngine::UI::SpriteElement&, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_ERASE_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterFontTex(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_REGISTERFONTTEX_OFFSET))(a1);
		}

		static ::System::Boolean TryGetFontTexInfo(::UnityEngine::Font* a1, ::UnityEngine::Texture*& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Font*, ::UnityEngine::Texture*&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETFONTTEXINFO_OFFSET))(a1, a2, a3);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RELEASE_OFFSET))(this);
		}

		::System::Void UnloadUnUsed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_UNLOADUNUSED_OFFSET))(this);
		}

		::System::Void UpdateAvailable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPDATEAVAILABLE_OFFSET))(this);
		}

		::System::Void UpdateAvailableImpl(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPDATEAVAILABLEIMPL_OFFSET))(this, a1);
		}

		::System::Boolean InsertImpl(::UnityEngine::Sprite* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Sprite*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_INSERTIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void UploadTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPLOADTEXTURE_OFFSET))(this);
		}

		::System::Boolean TryGetTexInfoImpl(::UnityEngine::UI::SpriteElement& a1, ::UnityEngine::Texture*& a2, ::UnityEngine::Vector2& a3, ::UnityEngine::Vector2& a4, ::System::Int32& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::SpriteElement&, ::UnityEngine::Texture*&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETTEXINFOIMPL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EraseImpl(::UnityEngine::UI::SpriteElement& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SpriteElement&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_ERASEIMPL_OFFSET))(this, a1);
		}

		static ::UnityEngine::Mesh* get_fullscreenMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_GET_FULLSCREENMESH_OFFSET))();
		}

		::System::Void RegisterFontTexImpl(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_REGISTERFONTTEXIMPL_OFFSET))(this, a1);
		}

		::System::Void UpdateFontTexImpl(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPDATEFONTTEXIMPL_OFFSET))(this, a1);
		}

		::System::Boolean TryGetFontTexInfoImpl(::UnityEngine::Font* a1, ::UnityEngine::Texture*& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Font*, ::UnityEngine::Texture*&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETFONTTEXINFOIMPL_OFFSET))(this, a1, a2, a3);
		}
	};
}
