#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class IConfigReader; }

#define UNITYENGINE_CONFIGREADER_GET_CUSTOMREADERS_OFFSET UNITYSDK_OFFSET(0x189FA3F0)
#define UNITYENGINE_CONFIGREADER_READFROMPATH_OFFSET UNITYSDK_OFFSET(0x189FA220)
#define UNITYENGINE_CONFIGREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x189FA420)

namespace UnityEngine
{
	inline static constexpr unsigned int ConfigReader_TypeDefinitionIndex = 3871;

	class ConfigReader : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::IConfigReader*>** StaticGet__customReaders_k__BackingField()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::IConfigReader*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigReader_TypeDefinitionIndex)->GetStaticField(0x5A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGREADER__CCTOR_OFFSET))();
		}

		static ::System::Void ReadFromPath(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGREADER_READFROMPATH_OFFSET))(path);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::IConfigReader*>* get_customReaders()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::IConfigReader*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGREADER_GET_CUSTOMREADERS_OFFSET))();
		}
	};
}
