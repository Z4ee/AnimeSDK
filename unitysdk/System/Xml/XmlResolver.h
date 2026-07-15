#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { class Uri; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_XML_XMLRESOLVER_GETENTITYASYNC_OFFSET UNITYSDK_OFFSET(0x169494D0)
#define SYSTEM_XML_XMLRESOLVER_RESOLVEURI_OFFSET UNITYSDK_OFFSET(0x16949180)
#define SYSTEM_XML_XMLRESOLVER_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x16949410)
#define SYSTEM_XML_XMLRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x16949520)

namespace System::Xml
{
	inline static constexpr unsigned int XmlResolver_TypeDefinitionIndex = 1962;

	class XmlResolver : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRESOLVER__CTOR_OFFSET))(this);
		}

		::System::Uri* ResolveUri(::System::Uri* a1, ::System::String* a2)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRESOLVER_RESOLVEURI_OFFSET))(this, a1, a2);
		}

		::System::Boolean SupportsType(::System::Uri* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRESOLVER_SUPPORTSTYPE_OFFSET))(this, a1, a2);
		}

		::System::Threading::Tasks::Task_1<::System::Object*>* GetEntityAsync(::System::Uri* a1, ::System::String* a2, ::System::Type* a3)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Object*>*(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRESOLVER_GETENTITYASYNC_OFFSET))(this, a1, a2, a3);
		}
	};
}
