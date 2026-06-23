#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/MaterialReference.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_Text; }
namespace TMPro { class TextMeshProUGUI; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define TMPRO_TMP_SUBMESHUI_ADDSUBTEXTOBJECT_OFFSET UNITYSDK_OFFSET(0x1E7AB3C0)
#define TMPRO_TMP_SUBMESHUI_CREATEMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E7ACB00)
#define TMPRO_TMP_SUBMESHUI_CULL_OFFSET UNITYSDK_OFFSET(0x1E7ACA90)
#define TMPRO_TMP_SUBMESHUI_GETMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1E7AA5A0)
#define TMPRO_TMP_SUBMESHUI_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7ACAF0)
#define TMPRO_TMP_SUBMESHUI_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7AC1F0)
#define TMPRO_TMP_SUBMESHUI_GETPADDINGFORMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1E7AC2F0)
#define TMPRO_TMP_SUBMESHUI_GETPADDINGFORMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7AAA30)
#define TMPRO_TMP_SUBMESHUI_GETROOTCANVASTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E7AC910)
#define TMPRO_TMP_SUBMESHUI_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7ACCA0)
#define TMPRO_TMP_SUBMESHUI_GET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7AADA0)
#define TMPRO_TMP_SUBMESHUI_GET_FALLBACKSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7AAFC0)
#define TMPRO_TMP_SUBMESHUI_GET_FONTASSET_OFFSET UNITYSDK_OFFSET(0x1E7AA3C0)
#define TMPRO_TMP_SUBMESHUI_GET_ISDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7AB050)
#define TMPRO_TMP_SUBMESHUI_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E7AA400)
#define TMPRO_TMP_SUBMESHUI_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1E7AAFE0)
#define TMPRO_TMP_SUBMESHUI_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7AA590)
#define TMPRO_TMP_SUBMESHUI_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1E7AB090)
#define TMPRO_TMP_SUBMESHUI_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1E7AB070)
#define TMPRO_TMP_SUBMESHUI_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7AACB0)
#define TMPRO_TMP_SUBMESHUI_GET_SPRITEASSET_OFFSET UNITYSDK_OFFSET(0x1E7AA3E0)
#define TMPRO_TMP_SUBMESHUI_GET_TEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1E7AB270)
#define TMPRO_TMP_SUBMESHUI_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E7ABB20)
#define TMPRO_TMP_SUBMESHUI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E7AB9C0)
#define TMPRO_TMP_SUBMESHUI_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E7AB840)
#define TMPRO_TMP_SUBMESHUI_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E7AC0B0)
#define TMPRO_TMP_SUBMESHUI_REBUILD_OFFSET UNITYSDK_OFFSET(0x1E7ACAB0)
#define TMPRO_TMP_SUBMESHUI_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0x1E7AB930)
#define TMPRO_TMP_SUBMESHUI_REFRESHMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7ACAE0)
#define TMPRO_TMP_SUBMESHUI_SETALLDIRTY_OFFSET UNITYSDK_OFFSET(0x1E7AC3F0)
#define TMPRO_TMP_SUBMESHUI_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x1E7AC400)
#define TMPRO_TMP_SUBMESHUI_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x1E7AAC80)
#define TMPRO_TMP_SUBMESHUI_SETPIVOTDIRTY_OFFSET UNITYSDK_OFFSET(0x1E7AC850)
#define TMPRO_TMP_SUBMESHUI_SETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7AACD0)
#define TMPRO_TMP_SUBMESHUI_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x1E7AAAC0)
#define TMPRO_TMP_SUBMESHUI_SET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7AADB0)
#define TMPRO_TMP_SUBMESHUI_SET_FALLBACKSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7AAFD0)
#define TMPRO_TMP_SUBMESHUI_SET_FONTASSET_OFFSET UNITYSDK_OFFSET(0x1E7AA3D0)
#define TMPRO_TMP_SUBMESHUI_SET_ISDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7AB060)
#define TMPRO_TMP_SUBMESHUI_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7AA7F0)
#define TMPRO_TMP_SUBMESHUI_SET_MESH_OFFSET UNITYSDK_OFFSET(0x1E7AB260)
#define TMPRO_TMP_SUBMESHUI_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1E7AB080)
#define TMPRO_TMP_SUBMESHUI_SET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7AACC0)
#define TMPRO_TMP_SUBMESHUI_SET_SPRITEASSET_OFFSET UNITYSDK_OFFSET(0x1E7AA3F0)
#define TMPRO_TMP_SUBMESHUI_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1E7ACAA0)
#define TMPRO_TMP_SUBMESHUI_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7AC410)
#define TMPRO_TMP_SUBMESHUI_UPDATEMESHPADDING_OFFSET UNITYSDK_OFFSET(0x1E7AC370)
#define TMPRO_TMP_SUBMESHUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7ACCD0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SubMeshUI_TypeDefinitionIndex = 39200;

	class TMP_SubMeshUI : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::TMPro::TMP_FontAsset* m_fontAsset; // 0xF8
		::TMPro::TMP_SpriteAsset* m_spriteAsset; // 0x100
		::UnityEngine::Material* m_material; // 0x108
		::UnityEngine::Material* m_sharedMaterial; // 0x110
		::UnityEngine::Material* m_fallbackMaterial; // 0x118
		::UnityEngine::Material* m_fallbackSourceMaterial; // 0x120
		::System::Boolean m_isDefaultMaterial; // 0x128
		::System::Single m_padding; // 0x12C
		::UnityEngine::Mesh* m_mesh; // 0x130
		::TMPro::TextMeshProUGUI* m_TextComponent; // 0x138
		::System::Boolean m_isRegisteredForEvents; // 0x140
		::System::Boolean m_materialDirty; // 0x141
		::System::Int32 m_materialReferenceIndex; // 0x144
		::UnityEngine::Transform* m_RootCanvasTransform; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI__CTOR_OFFSET))(this);
		}

		::TMPro::TMP_FontAsset* get_fontAsset()
		{
			return ((::TMPro::TMP_FontAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_FONTASSET_OFFSET))(this);
		}

		::System::Void set_fontAsset(::TMPro::TMP_FontAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_FONTASSET_OFFSET))(this, value);
		}

		::TMPro::TMP_SpriteAsset* get_spriteAsset()
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_SPRITEASSET_OFFSET))(this);
		}

		::System::Void set_spriteAsset(::TMPro::TMP_SpriteAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_SPRITEASSET_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_MATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_sharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_SHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void set_sharedMaterial(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_SHAREDMATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_fallbackMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_FALLBACKMATERIAL_OFFSET))(this);
		}

		::System::Void set_fallbackMaterial(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_FALLBACKMATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_fallbackSourceMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_FALLBACKSOURCEMATERIAL_OFFSET))(this);
		}

		::System::Void set_fallbackSourceMaterial(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_FALLBACKSOURCEMATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Boolean get_isDefaultMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_ISDEFAULTMATERIAL_OFFSET))(this);
		}

		::System::Void set_isDefaultMaterial(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_ISDEFAULTMATERIAL_OFFSET))(this, value);
		}

		::System::Single get_padding()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_padding(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_PADDING_OFFSET))(this, value);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_MESH_OFFSET))(this);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_MESH_OFFSET))(this, value);
		}

		::TMPro::TMP_Text* get_textComponent()
		{
			return ((::TMPro::TMP_Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_TEXTCOMPONENT_OFFSET))(this);
		}

		static ::TMPro::TMP_SubMeshUI* AddSubTextObject(::TMPro::TextMeshProUGUI* textComponent, ::TMPro::MaterialReference materialReference)
		{
			return ((::TMPro::TMP_SubMeshUI*(*)(::TMPro::TextMeshProUGUI*, ::TMPro::MaterialReference))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_ADDSUBTEXTOBJECT_OFFSET))(textComponent, materialReference);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Single GetPaddingForMaterial()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETPADDINGFORMATERIAL_OFFSET))(this);
		}

		::System::Single GetPaddingForMaterial_1(::UnityEngine::Material* mat)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETPADDINGFORMATERIAL_1_OFFSET))(this, mat);
		}

		::System::Void UpdateMeshPadding(::System::Boolean isExtraPadding, ::System::Boolean isUsingBold)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_UPDATEMESHPADDING_OFFSET))(this, isExtraPadding, isUsingBold);
		}

		::System::Void SetAllDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SETALLDIRTY_OFFSET))(this);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void SetLayoutDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SETLAYOUTDIRTY_OFFSET))(this);
		}

		::System::Void SetMaterialDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SETMATERIALDIRTY_OFFSET))(this);
		}

		::System::Void SetPivotDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SETPIVOTDIRTY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetRootCanvasTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETROOTCANVASTRANSFORM_OFFSET))(this);
		}

		::System::Void Cull(::UnityEngine::Rect clipRect, ::System::Boolean validRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_CULL_OFFSET))(this, clipRect, validRect);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate update)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_REBUILD_OFFSET))(this, update);
		}

		::System::Void RefreshMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_REFRESHMATERIAL_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void RecalculateClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_RECALCULATECLIPPING_OFFSET))(this);
		}

		::UnityEngine::Material* GetMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* GetMaterial_1(::UnityEngine::Material* mat)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETMATERIAL_1_OFFSET))(this, mat);
		}

		::UnityEngine::Material* CreateMaterialInstance(::UnityEngine::Material* source)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_CREATEMATERIALINSTANCE_OFFSET))(this, source);
		}

		::UnityEngine::Material* GetSharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETSHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void SetSharedMaterial(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SETSHAREDMATERIAL_OFFSET))(this, mat);
		}
	};
}
