#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_Settings; }

#define TMPRO_TMP_RESOURCEMANAGER_ADDFONTASSET_OFFSET UNITYSDK_OFFSET(0x1893F290)
#define TMPRO_TMP_RESOURCEMANAGER_GETTEXTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1893F1A0)
#define TMPRO_TMP_RESOURCEMANAGER_REBUILDFONTASSETCACHE_OFFSET UNITYSDK_OFFSET(0x1893F540)
#define TMPRO_TMP_RESOURCEMANAGER_TRYGETFONTASSET_OFFSET UNITYSDK_OFFSET(0x1893F420)
#define TMPRO_TMP_RESOURCEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1893F0A0)
#define TMPRO_TMP_RESOURCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1893F190)

namespace TMPro
{
	inline static constexpr unsigned int TMP_ResourceManager_TypeDefinitionIndex = 34358;

	class TMP_ResourceManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>** StaticGet_s_FontAssetReferences()
		{
			return (::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_ResourceManager_TypeDefinitionIndex)->GetStaticField(0x2CC40);
		}
		static ::TMPro::TMP_ResourceManager** StaticGet_s_instance()
		{
			return (::TMPro::TMP_ResourceManager**)Il2CppClass::FromTypeDefinitionIndex(TMP_ResourceManager_TypeDefinitionIndex)->GetStaticField(0x2CC48);
		}
		static ::TMPro::TMP_Settings** StaticGet_s_TextSettings()
		{
			return (::TMPro::TMP_Settings**)Il2CppClass::FromTypeDefinitionIndex(TMP_ResourceManager_TypeDefinitionIndex)->GetStaticField(0x2CC50);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::TMPro::TMP_FontAsset*>** StaticGet_s_FontAssetReferenceLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::TMPro::TMP_FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_ResourceManager_TypeDefinitionIndex)->GetStaticField(0x2CC58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER__CTOR_OFFSET))(this);
		}

		static ::TMPro::TMP_Settings* GetTextSettings()
		{
			return ((::TMPro::TMP_Settings*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER_GETTEXTSETTINGS_OFFSET))();
		}

		static ::System::Void AddFontAsset(::TMPro::TMP_FontAsset* fontAsset)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER_ADDFONTASSET_OFFSET))(fontAsset);
		}

		static ::System::Boolean TryGetFontAsset(::System::Int32 hashcode, ::TMPro::TMP_FontAsset*& fontAsset)
		{
			return ((::System::Boolean(*)(::System::Int32, ::TMPro::TMP_FontAsset*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER_TRYGETFONTASSET_OFFSET))(hashcode, fontAsset);
		}

		static ::System::Void RebuildFontAssetCache(::System::Int32 instanceID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER_REBUILDFONTASSETCACHE_OFFSET))(instanceID);
		}
	};
}
