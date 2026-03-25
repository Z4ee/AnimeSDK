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

#define TMPRO_TMP_SUBMESHUI_ADDSUBTEXTOBJECT_OFFSET UNITYSDK_OFFSET(0x18946870)
#define TMPRO_TMP_SUBMESHUI_CREATEMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0x18947B40)
#define TMPRO_TMP_SUBMESHUI_CULL_OFFSET UNITYSDK_OFFSET(0x18947AD0)
#define TMPRO_TMP_SUBMESHUI_GETMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x18946010)
#define TMPRO_TMP_SUBMESHUI_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x18947B30)
#define TMPRO_TMP_SUBMESHUI_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x18947290)
#define TMPRO_TMP_SUBMESHUI_GETPADDINGFORMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x189474A0)
#define TMPRO_TMP_SUBMESHUI_GETPADDINGFORMATERIAL_OFFSET UNITYSDK_OFFSET(0x189462C0)
#define TMPRO_TMP_SUBMESHUI_GETROOTCANVASTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18947A50)
#define TMPRO_TMP_SUBMESHUI_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x18947BC0)
#define TMPRO_TMP_SUBMESHUI_GET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0x18946590)
#define TMPRO_TMP_SUBMESHUI_GET_FALLBACKSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x189466E0)
#define TMPRO_TMP_SUBMESHUI_GET_FONTASSET_OFFSET UNITYSDK_OFFSET(0x18945F70)
#define TMPRO_TMP_SUBMESHUI_GET_ISDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x18946740)
#define TMPRO_TMP_SUBMESHUI_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x18945FB0)
#define TMPRO_TMP_SUBMESHUI_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x18946700)
#define TMPRO_TMP_SUBMESHUI_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x18946000)
#define TMPRO_TMP_SUBMESHUI_GET_MESH_OFFSET UNITYSDK_OFFSET(0x18946780)
#define TMPRO_TMP_SUBMESHUI_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x18946760)
#define TMPRO_TMP_SUBMESHUI_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x18946440)
#define TMPRO_TMP_SUBMESHUI_GET_SPRITEASSET_OFFSET UNITYSDK_OFFSET(0x18945F90)
#define TMPRO_TMP_SUBMESHUI_GET_TEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x18946800)
#define TMPRO_TMP_SUBMESHUI_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18946FF0)
#define TMPRO_TMP_SUBMESHUI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18946F90)
#define TMPRO_TMP_SUBMESHUI_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18946ED0)
#define TMPRO_TMP_SUBMESHUI_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x18947210)
#define TMPRO_TMP_SUBMESHUI_REBUILD_OFFSET UNITYSDK_OFFSET(0x18947AF0)
#define TMPRO_TMP_SUBMESHUI_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0x18946F80)
#define TMPRO_TMP_SUBMESHUI_REFRESHMATERIAL_OFFSET UNITYSDK_OFFSET(0x18947B20)
#define TMPRO_TMP_SUBMESHUI_SETALLDIRTY_OFFSET UNITYSDK_OFFSET(0x18947550)
#define TMPRO_TMP_SUBMESHUI_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x189475F0)
#define TMPRO_TMP_SUBMESHUI_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x18946410)
#define TMPRO_TMP_SUBMESHUI_SETPIVOTDIRTY_OFFSET UNITYSDK_OFFSET(0x189478E0)
#define TMPRO_TMP_SUBMESHUI_SETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x189464F0)
#define TMPRO_TMP_SUBMESHUI_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x18946320)
#define TMPRO_TMP_SUBMESHUI_SET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0x189465A0)
#define TMPRO_TMP_SUBMESHUI_SET_FALLBACKSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x189466F0)
#define TMPRO_TMP_SUBMESHUI_SET_FONTASSET_OFFSET UNITYSDK_OFFSET(0x18945F80)
#define TMPRO_TMP_SUBMESHUI_SET_ISDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x18946750)
#define TMPRO_TMP_SUBMESHUI_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x189461A0)
#define TMPRO_TMP_SUBMESHUI_SET_MESH_OFFSET UNITYSDK_OFFSET(0x189467F0)
#define TMPRO_TMP_SUBMESHUI_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x18946770)
#define TMPRO_TMP_SUBMESHUI_SET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x18946450)
#define TMPRO_TMP_SUBMESHUI_SET_SPRITEASSET_OFFSET UNITYSDK_OFFSET(0x18945FA0)
#define TMPRO_TMP_SUBMESHUI_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x18947AE0)
#define TMPRO_TMP_SUBMESHUI_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x18947600)
#define TMPRO_TMP_SUBMESHUI_UPDATEMESHPADDING_OFFSET UNITYSDK_OFFSET(0x18947500)
#define TMPRO_TMP_SUBMESHUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18947C60)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SubMeshUI_TypeDefinitionIndex = 34378;

	class TMP_SubMeshUI : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::TMPro::TMP_FontAsset* m_fontAsset; // 0xF0
		::TMPro::TMP_SpriteAsset* m_spriteAsset; // 0xF8
		::UnityEngine::Material* m_material; // 0x100
		::UnityEngine::Material* m_sharedMaterial; // 0x108
		::UnityEngine::Material* m_fallbackMaterial; // 0x110
		::UnityEngine::Material* m_fallbackSourceMaterial; // 0x118
		::System::Boolean m_isDefaultMaterial; // 0x120
		::System::Single m_padding; // 0x124
		::UnityEngine::Mesh* m_mesh; // 0x128
		::TMPro::TextMeshProUGUI* m_TextComponent; // 0x130
		::System::Boolean m_isRegisteredForEvents; // 0x138
		::System::Boolean m_materialDirty; // 0x139
		::System::Int32 m_materialReferenceIndex; // 0x13C
		::UnityEngine::Transform* m_RootCanvasTransform; // 0x140

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
