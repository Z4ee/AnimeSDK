#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_VALIDATEANDPARSEVALUE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E7EAD10)
#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_VALIDATEANDPARSEVALUE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E7EAD40)
#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_VALIDATEANDPARSEVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E7EA7F0)
#define SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_VALIDATEANDPARSEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EA7D0)

namespace System::Net
{
	inline static constexpr unsigned int TrackingValidationObjectDictionary_ValidateAndParseValue_TypeDefinitionIndex = 3440;

	class TrackingValidationObjectDictionary_ValidateAndParseValue : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_VALIDATEANDPARSEVALUE__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::System::Object* valueToValidate)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_VALIDATEANDPARSEVALUE_INVOKE_OFFSET))(this, valueToValidate);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* valueToValidate, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_VALIDATEANDPARSEVALUE_BEGININVOKE_OFFSET))(this, valueToValidate, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TRACKINGVALIDATIONOBJECTDICTIONARY_VALIDATEANDPARSEVALUE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
