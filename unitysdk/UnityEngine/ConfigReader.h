#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class IConfigReader; }

#define UNITYENGINE_CONFIGREADER_GET_CUSTOMREADERS_OFFSET UNITYSDK_OFFSET(0x1C169870)
#define UNITYENGINE_CONFIGREADER_READFROMPATH_OFFSET UNITYSDK_OFFSET(0x1C1696C0)
#define UNITYENGINE_CONFIGREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1698A0)

namespace UnityEngine
{
	inline static constexpr unsigned int ConfigReader_TypeDefinitionIndex = 4052;

	class ConfigReader : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::IConfigReader*>** StaticGet__customReaders_k__BackingField()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::IConfigReader*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigReader_TypeDefinitionIndex)->GetStaticField(0x37570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGREADER__CCTOR_OFFSET))();
		}

		static ::System::Void ReadFromPath(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGREADER_READFROMPATH_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::IConfigReader*>* get_customReaders()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::IConfigReader*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGREADER_GET_CUSTOMREADERS_OFFSET))();
		}
	};
}
