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

#define TMPRO_TMP_SUBMESHUI_ADDSUBTEXTOBJECT_OFFSET UNITYSDK_OFFSET(0x1B1D99F0)
#define TMPRO_TMP_SUBMESHUI_CREATEMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B1DACA0)
#define TMPRO_TMP_SUBMESHUI_CULL_OFFSET UNITYSDK_OFFSET(0x1B1DAC30)
#define TMPRO_TMP_SUBMESHUI_GETMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1B1D9170)
#define TMPRO_TMP_SUBMESHUI_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1DAC90)
#define TMPRO_TMP_SUBMESHUI_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1DA3E0)
#define TMPRO_TMP_SUBMESHUI_GETPADDINGFORMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1B1DA5F0)
#define TMPRO_TMP_SUBMESHUI_GETPADDINGFORMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D9430)
#define TMPRO_TMP_SUBMESHUI_GETROOTCANVASTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B1DABB0)
#define TMPRO_TMP_SUBMESHUI_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1DAD20)
#define TMPRO_TMP_SUBMESHUI_GET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D9710)
#define TMPRO_TMP_SUBMESHUI_GET_FALLBACKSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D9860)
#define TMPRO_TMP_SUBMESHUI_GET_FONTASSET_OFFSET UNITYSDK_OFFSET(0x1B1D90D0)
#define TMPRO_TMP_SUBMESHUI_GET_ISDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D98C0)
#define TMPRO_TMP_SUBMESHUI_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B1D9110)
#define TMPRO_TMP_SUBMESHUI_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1B1D9880)
#define TMPRO_TMP_SUBMESHUI_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D9160)
#define TMPRO_TMP_SUBMESHUI_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1B1D9900)
#define TMPRO_TMP_SUBMESHUI_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1B1D98E0)
#define TMPRO_TMP_SUBMESHUI_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D95C0)
#define TMPRO_TMP_SUBMESHUI_GET_SPRITEASSET_OFFSET UNITYSDK_OFFSET(0x1B1D90F0)
#define TMPRO_TMP_SUBMESHUI_GET_TEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B1D9980)
#define TMPRO_TMP_SUBMESHUI_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B1DA130)
#define TMPRO_TMP_SUBMESHUI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B1DA0D0)
#define TMPRO_TMP_SUBMESHUI_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B1DA010)
#define TMPRO_TMP_SUBMESHUI_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B1DA360)
#define TMPRO_TMP_SUBMESHUI_REBUILD_OFFSET UNITYSDK_OFFSET(0x1B1DAC50)
#define TMPRO_TMP_SUBMESHUI_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0x1B1DA0C0)
#define TMPRO_TMP_SUBMESHUI_REFRESHMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1DAC80)
#define TMPRO_TMP_SUBMESHUI_SETALLDIRTY_OFFSET UNITYSDK_OFFSET(0x1B1DA6A0)
#define TMPRO_TMP_SUBMESHUI_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x1B1DA750)
#define TMPRO_TMP_SUBMESHUI_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x1B1D9580)
#define TMPRO_TMP_SUBMESHUI_SETPIVOTDIRTY_OFFSET UNITYSDK_OFFSET(0x1B1DAA40)
#define TMPRO_TMP_SUBMESHUI_SETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D9670)
#define TMPRO_TMP_SUBMESHUI_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x1B1D9490)
#define TMPRO_TMP_SUBMESHUI_SET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D9720)
#define TMPRO_TMP_SUBMESHUI_SET_FALLBACKSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D9870)
#define TMPRO_TMP_SUBMESHUI_SET_FONTASSET_OFFSET UNITYSDK_OFFSET(0x1B1D90E0)
#define TMPRO_TMP_SUBMESHUI_SET_ISDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D98D0)
#define TMPRO_TMP_SUBMESHUI_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D9300)
#define TMPRO_TMP_SUBMESHUI_SET_MESH_OFFSET UNITYSDK_OFFSET(0x1B1D9970)
#define TMPRO_TMP_SUBMESHUI_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1B1D98F0)
#define TMPRO_TMP_SUBMESHUI_SET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1D95D0)
#define TMPRO_TMP_SUBMESHUI_SET_SPRITEASSET_OFFSET UNITYSDK_OFFSET(0x1B1D9100)
#define TMPRO_TMP_SUBMESHUI_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B1DAC40)
#define TMPRO_TMP_SUBMESHUI_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B1DA760)
#define TMPRO_TMP_SUBMESHUI_UPDATEMESHPADDING_OFFSET UNITYSDK_OFFSET(0x1B1DA650)
#define TMPRO_TMP_SUBMESHUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1DADB0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SubMeshUI_TypeDefinitionIndex = 41024;

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

		::System::Void set_fontAsset(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_FONTASSET_OFFSET))(this, a1);
		}

		::TMPro::TMP_SpriteAsset* get_spriteAsset()
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_SPRITEASSET_OFFSET))(this);
		}

		::System::Void set_spriteAsset(::TMPro::TMP_SpriteAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_SPRITEASSET_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_MATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_sharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_SHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void set_sharedMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_SHAREDMATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_fallbackMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_FALLBACKMATERIAL_OFFSET))(this);
		}

		::System::Void set_fallbackMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_FALLBACKMATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_fallbackSourceMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_FALLBACKSOURCEMATERIAL_OFFSET))(this);
		}

		::System::Void set_fallbackSourceMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_FALLBACKSOURCEMATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Boolean get_isDefaultMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_ISDEFAULTMATERIAL_OFFSET))(this);
		}

		::System::Void set_isDefaultMaterial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_ISDEFAULTMATERIAL_OFFSET))(this, a1);
		}

		::System::Single get_padding()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_padding(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_PADDING_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_MESH_OFFSET))(this);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SET_MESH_OFFSET))(this, a1);
		}

		::TMPro::TMP_Text* get_textComponent()
		{
			return ((::TMPro::TMP_Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GET_TEXTCOMPONENT_OFFSET))(this);
		}

		static ::TMPro::TMP_SubMeshUI* AddSubTextObject(::TMPro::TextMeshProUGUI* a1, ::TMPro::MaterialReference a2)
		{
			return ((::TMPro::TMP_SubMeshUI*(*)(::TMPro::TextMeshProUGUI*, ::TMPro::MaterialReference))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_ADDSUBTEXTOBJECT_OFFSET))(a1, a2);
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

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETMODIFIEDMATERIAL_OFFSET))(this, a1);
		}

		::System::Single GetPaddingForMaterial()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETPADDINGFORMATERIAL_OFFSET))(this);
		}

		::System::Single GetPaddingForMaterial_1(::UnityEngine::Material* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETPADDINGFORMATERIAL_1_OFFSET))(this, a1);
		}

		::System::Void UpdateMeshPadding(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_UPDATEMESHPADDING_OFFSET))(this, a1, a2);
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

		::System::Void Cull(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_CULL_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_REBUILD_OFFSET))(this, a1);
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

		::UnityEngine::Material* GetMaterial_1(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETMATERIAL_1_OFFSET))(this, a1);
		}

		::UnityEngine::Material* CreateMaterialInstance(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_CREATEMATERIALINSTANCE_OFFSET))(this, a1);
		}

		::UnityEngine::Material* GetSharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_GETSHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void SetSharedMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESHUI_SETSHAREDMATERIAL_OFFSET))(this, a1);
		}
	};
}
