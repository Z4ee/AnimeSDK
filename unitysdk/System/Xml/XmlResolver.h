#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { class Uri; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_XML_XMLRESOLVER_GETENTITYASYNC_OFFSET UNITYSDK_OFFSET(0x19896E90)
#define SYSTEM_XML_XMLRESOLVER_RESOLVEURI_OFFSET UNITYSDK_OFFSET(0x19896B20)
#define SYSTEM_XML_XMLRESOLVER_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x19896DD0)
#define SYSTEM_XML_XMLRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x19896EE0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlResolver_TypeDefinitionIndex = 1840;

	class XmlResolver : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRESOLVER__CTOR_OFFSET))(this);
		}

		::System::Uri* ResolveUri(::System::Uri* baseUri, ::System::String* relativeUri)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRESOLVER_RESOLVEURI_OFFSET))(this, baseUri, relativeUri);
		}

		::System::Boolean SupportsType(::System::Uri* absoluteUri, ::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRESOLVER_SUPPORTSTYPE_OFFSET))(this, absoluteUri, type);
		}

		::System::Threading::Tasks::Task_1<::System::Object*>* GetEntityAsync(::System::Uri* absoluteUri, ::System::String* role, ::System::Type* ofObjectToReturn)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Object*>*(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRESOLVER_GETENTITYASYNC_OFFSET))(this, absoluteUri, role, ofObjectToReturn);
		}
	};
}
