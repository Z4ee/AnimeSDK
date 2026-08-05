#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CULTUREINFOMAPPER_GETCULTUREINFONAME_OFFSET UNITYSDK_OFFSET(0x1CBF2920)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CULTUREINFOMAPPER_INITIALIZECULTUREINFOMAP_OFFSET UNITYSDK_OFFSET(0x1CBF2A20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CultureInfoConverter_CultureInfoMapper_TypeDefinitionIndex = 2847;

	class CultureInfoConverter_CultureInfoMapper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_cultureInfoNameMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CultureInfoConverter_CultureInfoMapper_TypeDefinitionIndex)->GetStaticField(0x32B0);
		}

		static ::System::String* GetCultureInfoName(::System::String* cultureInfoDisplayName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CULTUREINFOMAPPER_GETCULTUREINFONAME_OFFSET))(cultureInfoDisplayName);
		}

		static ::System::Void InitializeCultureInfoMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CULTUREINFOMAPPER_INITIALIZECULTUREINFOMAP_OFFSET))();
		}
	};
}
