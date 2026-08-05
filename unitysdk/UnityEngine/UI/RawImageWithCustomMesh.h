#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_GETMESH_OFFSET UNITYSDK_OFFSET(0x1F37EBD0)
#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F37E790)
#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1F37ED50)
#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_GET_UVRECT_OFFSET UNITYSDK_OFFSET(0x1F37EF20)
#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F37F580)
#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_REBUILD_OFFSET UNITYSDK_OFFSET(0x1F37F3B0)
#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_SETMESH_OFFSET UNITYSDK_OFFSET(0x1F37EC20)
#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_SETNATIVESIZE_OFFSET UNITYSDK_OFFSET(0x1F37F020)
#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1F37ED60)
#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_SET_UVRECT_OFFSET UNITYSDK_OFFSET(0x1F37EF30)
#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F37E760)
#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F37F6B0)
#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F37F710)
#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH___BASE_REBUILD_OFFSET UNITYSDK_OFFSET(0x1F37F7B0)
#define UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH___BASE_SETNATIVESIZE_OFFSET UNITYSDK_OFFSET(0x1F37F7C0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RawImageWithCustomMesh_TypeDefinitionIndex = 19278;

	class RawImageWithCustomMesh : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::UnityEngine::Texture* m_Texture; // 0xF8
		::UnityEngine::Rect m_UVRect; // 0x100
		::UnityEngine::Mesh* m_Mesh; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Mesh* GetMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_GETMESH_OFFSET))(this);
		}

		::System::Void SetMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_SETMESH_OFFSET))(this, mesh);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_GET_TEXTURE_OFFSET))(this);
		}

		::System::Void set_texture(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_SET_TEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::Rect get_uvRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_GET_UVRECT_OFFSET))(this);
		}

		::System::Void set_uvRect(::UnityEngine::Rect value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_SET_UVRECT_OFFSET))(this, value);
		}

		::System::Void SetNativeSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_SETNATIVESIZE_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate update)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_REBUILD_OFFSET))(this, update);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::UnityEngine::Texture* __base_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH___BASE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_Rebuild(::UnityEngine::UI::CanvasUpdate P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH___BASE_REBUILD_OFFSET))(this, P0);
		}

		::System::Void __base_SetNativeSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAWIMAGEWITHCUSTOMMESH___BASE_SETNATIVESIZE_OFFSET))(this);
		}
	};
}
