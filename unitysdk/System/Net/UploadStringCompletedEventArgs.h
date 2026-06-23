#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/AsyncCompletedEventArgs.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NET_UPLOADSTRINGCOMPLETEDEVENTARGS_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1C4A3BA0)
#define SYSTEM_NET_UPLOADSTRINGCOMPLETEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4A3BC0)
#define SYSTEM_NET_UPLOADSTRINGCOMPLETEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A3B20)

namespace System::Net
{
	inline static constexpr unsigned int UploadStringCompletedEventArgs_TypeDefinitionIndex = 3466;

	class UploadStringCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs
	{
	public:
		::System::String* m_Result; // 0x28

		::System::Void _ctor(::System::String* result, ::System::Exception* exception, ::System::Boolean cancelled, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADSTRINGCOMPLETEDEVENTARGS__CTOR_OFFSET))(this, result, exception, cancelled, userToken);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADSTRINGCOMPLETEDEVENTARGS__CTOR_1_OFFSET))(this);
		}

		::System::String* get_Result()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADSTRINGCOMPLETEDEVENTARGS_GET_RESULT_OFFSET))(this);
		}
	};
}
