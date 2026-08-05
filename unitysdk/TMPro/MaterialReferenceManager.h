#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TMPro { class TMP_ColorGradient; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace UnityEngine { class Material; }

#define TMPRO_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1FB26DB0)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_OFFSET UNITYSDK_OFFSET(0x1FB26C40)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDFONTASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FB26580)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDFONTASSET_OFFSET UNITYSDK_OFFSET(0x1FB264F0)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDFONTMATERIALINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FB26BB0)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDFONTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1FB26AB0)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSETINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1FB26950)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FB26760)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSET_1_OFFSET UNITYSDK_OFFSET(0x1FB268B0)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSET_OFFSET UNITYSDK_OFFSET(0x1FB266D0)
#define TMPRO_MATERIALREFERENCEMANAGER_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1FB26F10)
#define TMPRO_MATERIALREFERENCEMANAGER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1FB26E90)
#define TMPRO_MATERIALREFERENCEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1FB26280)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESETINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FB27550)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESET_OFFSET UNITYSDK_OFFSET(0x1FB273F0)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETFONTASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FB270F0)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETFONTASSET_OFFSET UNITYSDK_OFFSET(0x1FB26F90)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETMATERIALINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FB27780)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1FB27620)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FB27320)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSET_OFFSET UNITYSDK_OFFSET(0x1FB271C0)
#define TMPRO_MATERIALREFERENCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB26300)

namespace TMPro
{
	inline static constexpr unsigned int MaterialReferenceManager_TypeDefinitionIndex = 39763;

	class MaterialReferenceManager : public ::System::Object
	{
	public:
		static ::TMPro::MaterialReferenceManager** StaticGet_s_Instance()
		{
			return (::TMPro::MaterialReferenceManager**)Il2CppClass::FromTypeDefinitionIndex(MaterialReferenceManager_TypeDefinitionIndex)->GetStaticField(0x2C740);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::TMPro::TMP_ColorGradient*>* m_ColorGradientReferenceLookup; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::TMPro::TMP_SpriteAsset*>* m_SpriteAssetReferenceLookup; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::TMPro::TMP_FontAsset*>* m_FontAssetReferenceLookup; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* m_FontMaterialReferenceLookup; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER__CTOR_OFFSET))(this);
		}

		static ::TMPro::MaterialReferenceManager* get_instance()
		{
			return ((::TMPro::MaterialReferenceManager*(*)())((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void AddFontAsset(::TMPro::TMP_FontAsset* fontAsset)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDFONTASSET_OFFSET))(fontAsset);
		}

		::System::Void AddFontAssetInternal(::TMPro::TMP_FontAsset* fontAsset)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDFONTASSETINTERNAL_OFFSET))(this, fontAsset);
		}

		static ::System::Void AddSpriteAsset(::TMPro::TMP_SpriteAsset* spriteAsset)
		{
			return ((::System::Void(*)(::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSET_OFFSET))(spriteAsset);
		}

		::System::Void AddSpriteAssetInternal(::TMPro::TMP_SpriteAsset* spriteAsset)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSETINTERNAL_OFFSET))(this, spriteAsset);
		}

		static ::System::Void AddSpriteAsset_1(::System::Int32 hashCode, ::TMPro::TMP_SpriteAsset* spriteAsset)
		{
			return ((::System::Void(*)(::System::Int32, ::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSET_1_OFFSET))(hashCode, spriteAsset);
		}

		::System::Void AddSpriteAssetInternal_1(::System::Int32 hashCode, ::TMPro::TMP_SpriteAsset* spriteAsset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSETINTERNAL_1_OFFSET))(this, hashCode, spriteAsset);
		}

		static ::System::Void AddFontMaterial(::System::Int32 hashCode, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDFONTMATERIAL_OFFSET))(hashCode, material);
		}

		::System::Void AddFontMaterialInternal(::System::Int32 hashCode, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDFONTMATERIALINTERNAL_OFFSET))(this, hashCode, material);
		}

		static ::System::Void AddColorGradientPreset(::System::Int32 hashCode, ::TMPro::TMP_ColorGradient* spriteAsset)
		{
			return ((::System::Void(*)(::System::Int32, ::TMPro::TMP_ColorGradient*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_OFFSET))(hashCode, spriteAsset);
		}

		::System::Void AddColorGradientPreset_Internal(::System::Int32 hashCode, ::TMPro::TMP_ColorGradient* spriteAsset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::TMPro::TMP_ColorGradient*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_INTERNAL_OFFSET))(this, hashCode, spriteAsset);
		}

		::System::Boolean Contains(::TMPro::TMP_FontAsset* font)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_CONTAINS_OFFSET))(this, font);
		}

		::System::Boolean Contains_1(::TMPro::TMP_SpriteAsset* sprite)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_CONTAINS_1_OFFSET))(this, sprite);
		}

		static ::System::Boolean TryGetFontAsset(::System::Int32 hashCode, ::TMPro::TMP_FontAsset*& fontAsset)
		{
			return ((::System::Boolean(*)(::System::Int32, ::TMPro::TMP_FontAsset*&))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETFONTASSET_OFFSET))(hashCode, fontAsset);
		}

		::System::Boolean TryGetFontAssetInternal(::System::Int32 hashCode, ::TMPro::TMP_FontAsset*& fontAsset)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::TMPro::TMP_FontAsset*&))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETFONTASSETINTERNAL_OFFSET))(this, hashCode, fontAsset);
		}

		static ::System::Boolean TryGetSpriteAsset(::System::Int32 hashCode, ::TMPro::TMP_SpriteAsset*& spriteAsset)
		{
			return ((::System::Boolean(*)(::System::Int32, ::TMPro::TMP_SpriteAsset*&))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSET_OFFSET))(hashCode, spriteAsset);
		}

		::System::Boolean TryGetSpriteAssetInternal(::System::Int32 hashCode, ::TMPro::TMP_SpriteAsset*& spriteAsset)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::TMPro::TMP_SpriteAsset*&))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSETINTERNAL_OFFSET))(this, hashCode, spriteAsset);
		}

		static ::System::Boolean TryGetColorGradientPreset(::System::Int32 hashCode, ::TMPro::TMP_ColorGradient*& gradientPreset)
		{
			return ((::System::Boolean(*)(::System::Int32, ::TMPro::TMP_ColorGradient*&))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESET_OFFSET))(hashCode, gradientPreset);
		}

		::System::Boolean TryGetColorGradientPresetInternal(::System::Int32 hashCode, ::TMPro::TMP_ColorGradient*& gradientPreset)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::TMPro::TMP_ColorGradient*&))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESETINTERNAL_OFFSET))(this, hashCode, gradientPreset);
		}

		static ::System::Boolean TryGetMaterial(::System::Int32 hashCode, ::UnityEngine::Material*& material)
		{
			return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETMATERIAL_OFFSET))(hashCode, material);
		}

		::System::Boolean TryGetMaterialInternal(::System::Int32 hashCode, ::UnityEngine::Material*& material)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETMATERIALINTERNAL_OFFSET))(this, hashCode, material);
		}
	};
}
