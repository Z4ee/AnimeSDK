#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_Settings; }

#define TMPRO_TMP_RESOURCEMANAGER_ADDFONTASSET_OFFSET UNITYSDK_OFFSET(0x1C3152A0)
#define TMPRO_TMP_RESOURCEMANAGER_GETTEXTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C3150D0)
#define TMPRO_TMP_RESOURCEMANAGER_REBUILDFONTASSETCACHE_OFFSET UNITYSDK_OFFSET(0x1C315550)
#define TMPRO_TMP_RESOURCEMANAGER_TRYGETFONTASSET_OFFSET UNITYSDK_OFFSET(0x1C315430)
#define TMPRO_TMP_RESOURCEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C314FB0)
#define TMPRO_TMP_RESOURCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3150C0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_ResourceManager_TypeDefinitionIndex = 39180;

	class TMP_ResourceManager : public ::System::Object
	{
	public:
		static ::TMPro::TMP_Settings** StaticGet_s_TextSettings()
		{
			return (::TMPro::TMP_Settings**)Il2CppClass::FromTypeDefinitionIndex(TMP_ResourceManager_TypeDefinitionIndex)->GetStaticField(0x2ACF0);
		}
		static ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>** StaticGet_s_FontAssetReferences()
		{
			return (::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_ResourceManager_TypeDefinitionIndex)->GetStaticField(0x2ACF8);
		}
		static ::TMPro::TMP_ResourceManager** StaticGet_s_instance()
		{
			return (::TMPro::TMP_ResourceManager**)Il2CppClass::FromTypeDefinitionIndex(TMP_ResourceManager_TypeDefinitionIndex)->GetStaticField(0x2AD00);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::TMPro::TMP_FontAsset*>** StaticGet_s_FontAssetReferenceLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::TMPro::TMP_FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_ResourceManager_TypeDefinitionIndex)->GetStaticField(0x2AD08);
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
