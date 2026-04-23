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

#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_ERASEIMPL_OFFSET UNITYSDK_OFFSET(0x1A590190)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_ERASE_OFFSET UNITYSDK_OFFSET(0x1A55F9D0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_GET_FULLSCREENMESH_OFFSET UNITYSDK_OFFSET(0x1A593E90)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_INSERTIMPL_OFFSET UNITYSDK_OFFSET(0x1A58F850)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_INSERT_OFFSET UNITYSDK_OFFSET(0x1A55FDE0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_REGISTERFONTTEXIMPL_OFFSET UNITYSDK_OFFSET(0x1A590450)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_REGISTERFONTTEX_OFFSET UNITYSDK_OFFSET(0x1A5903C0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1A5929A0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETFONTTEXINFOIMPL_OFFSET UNITYSDK_OFFSET(0x1A5908D0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETFONTTEXINFO_OFFSET UNITYSDK_OFFSET(0x1A590820)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETTEXINFOIMPL_OFFSET UNITYSDK_OFFSET(0x1A58FEE0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETTEXINFO_OFFSET UNITYSDK_OFFSET(0x1A560780)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETTEX_OFFSET UNITYSDK_OFFSET(0x1A5582D0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_UNLOADUNUSED_OFFSET UNITYSDK_OFFSET(0x1A593230)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPDATEAVAILABLEIMPL_OFFSET UNITYSDK_OFFSET(0x1A593240)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPDATEAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A5937A0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPDATEFONTTEXIMPL_OFFSET UNITYSDK_OFFSET(0x1A5941D0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPLOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A593AA0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A594430)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A590A90)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RuntimeAtlasManager_TypeDefinitionIndex = 5691;

	class RuntimeAtlasManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Mesh** StaticGet_s_FullscreenMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(RuntimeAtlasManager_TypeDefinitionIndex)->GetStaticField(0x19B60);
		}
		static ::UnityEngine::Sprite** StaticGet_defaultSprite()
		{
			return (::UnityEngine::Sprite**)Il2CppClass::FromTypeDefinitionIndex(RuntimeAtlasManager_TypeDefinitionIndex)->GetStaticField(0x19B68);
		}
		static ::UnityEngine::UI::RuntimeAtlasManager** StaticGet_s_Instance()
		{
			return (::UnityEngine::UI::RuntimeAtlasManager**)Il2CppClass::FromTypeDefinitionIndex(RuntimeAtlasManager_TypeDefinitionIndex)->GetStaticField(0x19B70);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_QueryMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(RuntimeAtlasManager_TypeDefinitionIndex)->GetStaticField(0x6D80);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_UploadTexMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(RuntimeAtlasManager_TypeDefinitionIndex)->GetStaticField(0x6D88);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_InsertMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(RuntimeAtlasManager_TypeDefinitionIndex)->GetStaticField(0x6D90);
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

		::System::Void _ctor(::UnityEngine::ComputeShader* copyShader, ::UnityEngine::Material* copyMat, ::UnityEngine::Texture* clearTex, ::UnityEngine::Sprite* packedSprite)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::UnityEngine::Material*, ::UnityEngine::Texture*, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER__CTOR_OFFSET))(this, copyShader, copyMat, clearTex, packedSprite);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean Insert(::UnityEngine::Sprite* sprite, ::System::Boolean needPadding)
		{
			return ((::System::Boolean(*)(::UnityEngine::Sprite*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_INSERT_OFFSET))(sprite, needPadding);
		}

		static ::System::Boolean TryGetTexInfo(::UnityEngine::UI::SpriteElement& element, ::UnityEngine::Shader* shader, ::UnityEngine::UI::Graphic* graphic, ::UnityEngine::Texture*& texture, ::UnityEngine::Vector2& uvScale, ::UnityEngine::Vector2& uvOffset, ::System::Int32& texID)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::SpriteElement&, ::UnityEngine::Shader*, ::UnityEngine::UI::Graphic*, ::UnityEngine::Texture*&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETTEXINFO_OFFSET))(element, shader, graphic, texture, uvScale, uvOffset, texID);
		}

		static ::System::Boolean TryGetTex(::UnityEngine::UI::SpriteElement& element, ::UnityEngine::Texture*& texture)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::SpriteElement&, ::UnityEngine::Texture*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETTEX_OFFSET))(element, texture);
		}

		static ::System::Void Erase(::UnityEngine::UI::SpriteElement& element, ::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::UnityEngine::UI::SpriteElement&, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_ERASE_OFFSET))(element, graphic);
		}

		static ::System::Void RegisterFontTex(::UnityEngine::Font* font)
		{
			return ((::System::Void(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_REGISTERFONTTEX_OFFSET))(font);
		}

		static ::System::Boolean TryGetFontTexInfo(::UnityEngine::Font* font, ::UnityEngine::Texture*& mainTex, ::System::Int32& texID)
		{
			return ((::System::Boolean(*)(::UnityEngine::Font*, ::UnityEngine::Texture*&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETFONTTEXINFO_OFFSET))(font, mainTex, texID);
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

		::System::Void UpdateAvailableImpl(::System::Boolean unloadUnUsed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPDATEAVAILABLEIMPL_OFFSET))(this, unloadUnUsed);
		}

		::System::Boolean InsertImpl(::UnityEngine::Sprite* sprite, ::System::Boolean needPadding)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Sprite*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_INSERTIMPL_OFFSET))(this, sprite, needPadding);
		}

		::System::Void UploadTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPLOADTEXTURE_OFFSET))(this);
		}

		::System::Boolean TryGetTexInfoImpl(::UnityEngine::UI::SpriteElement& element, ::UnityEngine::Texture*& texture, ::UnityEngine::Vector2& uvScale, ::UnityEngine::Vector2& uvOffset, ::System::Int32& texID)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::SpriteElement&, ::UnityEngine::Texture*&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETTEXINFOIMPL_OFFSET))(this, element, texture, uvScale, uvOffset, texID);
		}

		::System::Void EraseImpl(::UnityEngine::UI::SpriteElement& element)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::SpriteElement&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_ERASEIMPL_OFFSET))(this, element);
		}

		static ::UnityEngine::Mesh* get_fullscreenMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_GET_FULLSCREENMESH_OFFSET))();
		}

		::System::Void RegisterFontTexImpl(::UnityEngine::Font* font)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_REGISTERFONTTEXIMPL_OFFSET))(this, font);
		}

		::System::Void UpdateFontTexImpl(::UnityEngine::Font* font)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_UPDATEFONTTEXIMPL_OFFSET))(this, font);
		}

		::System::Boolean TryGetFontTexInfoImpl(::UnityEngine::Font* font, ::UnityEngine::Texture*& mainTex, ::System::Int32& texID)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Font*, ::UnityEngine::Texture*&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_TRYGETFONTTEXINFOIMPL_OFFSET))(this, font, mainTex, texID);
		}
	};
}
