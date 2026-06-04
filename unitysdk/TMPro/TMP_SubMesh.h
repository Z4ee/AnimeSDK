#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/MaterialReference.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_Text; }
namespace TMPro { class TextMeshPro; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }

#define TMPRO_TMP_SUBMESH_ADDSUBTEXTOBJECT_OFFSET UNITYSDK_OFFSET(0x1B1D8310)
#define TMPRO_TMP_SUBMESH_CREATEMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B1D8BC0)
#define TMPRO_TMP_SUBMESH_DESTROYSELF_OFFSET UNITYSDK_OFFSET(0x1B1D8B90)
#define TMPRO_TMP_SUBMESH_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D7B70)
#define TMPRO_TMP_SUBMESH_GETPADDINGFORMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D7E50)
#define TMPRO_TMP_SUBMESH_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D8C40)
#define TMPRO_TMP_SUBMESH_GET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D7F70)
#define TMPRO_TMP_SUBMESH_GET_FALLBACKSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D8080)
#define TMPRO_TMP_SUBMESH_GET_FONTASSET_OFFSET UNITYSDK_OFFSET(0x1B1D7B20)
#define TMPRO_TMP_SUBMESH_GET_ISDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D80A0)
#define TMPRO_TMP_SUBMESH_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D7B60)
#define TMPRO_TMP_SUBMESH_GET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0x1B1D8160)
#define TMPRO_TMP_SUBMESH_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1B1D8240)
#define TMPRO_TMP_SUBMESH_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1B1D80C0)
#define TMPRO_TMP_SUBMESH_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1B1D80E0)
#define TMPRO_TMP_SUBMESH_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D7EA0)
#define TMPRO_TMP_SUBMESH_GET_SPRITEASSET_OFFSET UNITYSDK_OFFSET(0x1B1D7B40)
#define TMPRO_TMP_SUBMESH_GET_TEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B1D82B0)
#define TMPRO_TMP_SUBMESH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B1D8AE0)
#define TMPRO_TMP_SUBMESH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B1D8A80)
#define TMPRO_TMP_SUBMESH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B1D8970)
#define TMPRO_TMP_SUBMESH_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x1B1D8E80)
#define TMPRO_TMP_SUBMESH_SETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D7F10)
#define TMPRO_TMP_SUBMESH_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x1B1D8D20)
#define TMPRO_TMP_SUBMESH_SET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D7F80)
#define TMPRO_TMP_SUBMESH_SET_FALLBACKSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D8090)
#define TMPRO_TMP_SUBMESH_SET_FONTASSET_OFFSET UNITYSDK_OFFSET(0x1B1D7B30)
#define TMPRO_TMP_SUBMESH_SET_ISDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D80B0)
#define TMPRO_TMP_SUBMESH_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D7D50)
#define TMPRO_TMP_SUBMESH_SET_MESH_OFFSET UNITYSDK_OFFSET(0x1B1D82A0)
#define TMPRO_TMP_SUBMESH_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1B1D80D0)
#define TMPRO_TMP_SUBMESH_SET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D7EB0)
#define TMPRO_TMP_SUBMESH_SET_SPRITEASSET_OFFSET UNITYSDK_OFFSET(0x1B1D7B50)
#define TMPRO_TMP_SUBMESH_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D8E90)
#define TMPRO_TMP_SUBMESH_UPDATEMESHPADDING_OFFSET UNITYSDK_OFFSET(0x1B1D8CD0)
#define TMPRO_TMP_SUBMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D90C0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SubMesh_TypeDefinitionIndex = 41023;

	class TMP_SubMesh : public ::UnityEngine::MonoBehaviour
	{
	public:
		::TMPro::TMP_FontAsset* m_fontAsset; // 0x18
		::TMPro::TMP_SpriteAsset* m_spriteAsset; // 0x20
		::UnityEngine::Material* m_material; // 0x28
		::UnityEngine::Material* m_sharedMaterial; // 0x30
		::UnityEngine::Material* m_fallbackMaterial; // 0x38
		::UnityEngine::Material* m_fallbackSourceMaterial; // 0x40
		::System::Boolean m_isDefaultMaterial; // 0x48
		::System::Single m_padding; // 0x4C
		::UnityEngine::Renderer* m_renderer; // 0x50
		::UnityEngine::MeshFilter* m_meshFilter; // 0x58
		::UnityEngine::Mesh* m_mesh; // 0x60
		::TMPro::TextMeshPro* m_TextComponent; // 0x68
		::System::Boolean m_isRegisteredForEvents; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH__CTOR_OFFSET))(this);
		}

		::TMPro::TMP_FontAsset* get_fontAsset()
		{
			return ((::TMPro::TMP_FontAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_FONTASSET_OFFSET))(this);
		}

		::System::Void set_fontAsset(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_FONTASSET_OFFSET))(this, a1);
		}

		::TMPro::TMP_SpriteAsset* get_spriteAsset()
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_SPRITEASSET_OFFSET))(this);
		}

		::System::Void set_spriteAsset(::TMPro::TMP_SpriteAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_SPRITEASSET_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_MATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_sharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_SHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void set_sharedMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_SHAREDMATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_fallbackMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_FALLBACKMATERIAL_OFFSET))(this);
		}

		::System::Void set_fallbackMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_FALLBACKMATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_fallbackSourceMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_FALLBACKSOURCEMATERIAL_OFFSET))(this);
		}

		::System::Void set_fallbackSourceMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_FALLBACKSOURCEMATERIAL_OFFSET))(this, a1);
		}

		::System::Boolean get_isDefaultMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_ISDEFAULTMATERIAL_OFFSET))(this);
		}

		::System::Void set_isDefaultMaterial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_ISDEFAULTMATERIAL_OFFSET))(this, a1);
		}

		::System::Single get_padding()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_padding(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_PADDING_OFFSET))(this, a1);
		}

		::UnityEngine::Renderer* get_renderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_RENDERER_OFFSET))(this);
		}

		::UnityEngine::MeshFilter* get_meshFilter()
		{
			return ((::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_MESHFILTER_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_MESH_OFFSET))(this);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_MESH_OFFSET))(this, a1);
		}

		::TMPro::TMP_Text* get_textComponent()
		{
			return ((::TMPro::TMP_Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_TEXTCOMPONENT_OFFSET))(this);
		}

		static ::TMPro::TMP_SubMesh* AddSubTextObject(::TMPro::TextMeshPro* a1, ::TMPro::MaterialReference a2)
		{
			return ((::TMPro::TMP_SubMesh*(*)(::TMPro::TextMeshPro*, ::TMPro::MaterialReference))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_ADDSUBTEXTOBJECT_OFFSET))(a1, a2);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_ONDESTROY_OFFSET))(this);
		}

		::System::Void DestroySelf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_DESTROYSELF_OFFSET))(this);
		}

		::UnityEngine::Material* GetMaterial(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GETMATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* CreateMaterialInstance(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_CREATEMATERIALINSTANCE_OFFSET))(this, a1);
		}

		::UnityEngine::Material* GetSharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GETSHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void SetSharedMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SETSHAREDMATERIAL_OFFSET))(this, a1);
		}

		::System::Single GetPaddingForMaterial()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GETPADDINGFORMATERIAL_OFFSET))(this);
		}

		::System::Void UpdateMeshPadding(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_UPDATEMESHPADDING_OFFSET))(this, a1, a2);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void SetMaterialDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SETMATERIALDIRTY_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_UPDATEMATERIAL_OFFSET))(this);
		}
	};
}
