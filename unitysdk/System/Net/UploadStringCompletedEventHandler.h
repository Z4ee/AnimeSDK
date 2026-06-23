#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class UploadStringCompletedEventArgs; }

#define SYSTEM_NET_UPLOADSTRINGCOMPLETEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D5D8920)
#define SYSTEM_NET_UPLOADSTRINGCOMPLETEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D5D8960)
#define SYSTEM_NET_UPLOADSTRINGCOMPLETEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D5D83A0)
#define SYSTEM_NET_UPLOADSTRINGCOMPLETEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D8380)

namespace System::Net
{
	inline static constexpr unsigned int UploadStringCompletedEventHandler_TypeDefinitionIndex = 3465;

	class UploadStringCompletedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADSTRINGCOMPLETEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Net::UploadStringCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::UploadStringCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADSTRINGCOMPLETEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Net::UploadStringCompletedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Net::UploadStringCompletedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADSTRINGCOMPLETEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADSTRINGCOMPLETEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
