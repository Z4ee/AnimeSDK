#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_Settings; }

#define TMPRO_TMP_RESOURCEMANAGER_ADDFONTASSET_OFFSET UNITYSDK_OFFSET(0x171CA270)
#define TMPRO_TMP_RESOURCEMANAGER_GETTEXTSETTINGS_OFFSET UNITYSDK_OFFSET(0x171CA180)
#define TMPRO_TMP_RESOURCEMANAGER_REBUILDFONTASSETCACHE_OFFSET UNITYSDK_OFFSET(0x171CA510)
#define TMPRO_TMP_RESOURCEMANAGER_TRYGETFONTASSET_OFFSET UNITYSDK_OFFSET(0x171CA430)
#define TMPRO_TMP_RESOURCEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x171CA080)
#define TMPRO_TMP_RESOURCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x171CA170)

namespace TMPro
{
	inline static constexpr unsigned int TMP_ResourceManager_TypeDefinitionIndex = 41819;

	class TMP_ResourceManager : public ::System::Object
	{
	public:
		static ::TMPro::TMP_Settings** StaticGet_s_TextSettings()
		{
			return (::TMPro::TMP_Settings**)Il2CppClass::FromTypeDefinitionIndex(TMP_ResourceManager_TypeDefinitionIndex)->GetStaticField(0x571F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::TMPro::TMP_FontAsset*>** StaticGet_s_FontAssetReferenceLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::TMPro::TMP_FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_ResourceManager_TypeDefinitionIndex)->GetStaticField(0x571F8);
		}
		static ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>** StaticGet_s_FontAssetReferences()
		{
			return (::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_ResourceManager_TypeDefinitionIndex)->GetStaticField(0x57200);
		}
		static ::TMPro::TMP_ResourceManager** StaticGet_s_instance()
		{
			return (::TMPro::TMP_ResourceManager**)Il2CppClass::FromTypeDefinitionIndex(TMP_ResourceManager_TypeDefinitionIndex)->GetStaticField(0x57208);
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

		static ::System::Void AddFontAsset(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER_ADDFONTASSET_OFFSET))(a1);
		}

		static ::System::Boolean TryGetFontAsset(::System::Int32 a1, ::TMPro::TMP_FontAsset*& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::TMPro::TMP_FontAsset*&))((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER_TRYGETFONTASSET_OFFSET))(a1, a2);
		}

		static ::System::Void RebuildFontAssetCache(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_RESOURCEMANAGER_REBUILDFONTASSETCACHE_OFFSET))(a1);
		}
	};
}
