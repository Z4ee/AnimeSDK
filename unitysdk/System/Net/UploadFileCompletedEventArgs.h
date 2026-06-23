#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/AsyncCompletedEventArgs.h"

namespace System { class Exception; }
namespace System { class Object; }

#define SYSTEM_NET_UPLOADFILECOMPLETEDEVENTARGS_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1CB04BD0)
#define SYSTEM_NET_UPLOADFILECOMPLETEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB04BF0)
#define SYSTEM_NET_UPLOADFILECOMPLETEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB04B50)

namespace System::Net
{
	inline static constexpr unsigned int UploadFileCompletedEventArgs_TypeDefinitionIndex = 3470;

	class UploadFileCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs
	{
	public:
		::Il2CppArray<::System::Byte>* m_Result; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Byte>* result, ::System::Exception* exception, ::System::Boolean cancelled, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADFILECOMPLETEDEVENTARGS__CTOR_OFFSET))(this, result, exception, cancelled, userToken);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADFILECOMPLETEDEVENTARGS__CTOR_1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Result()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADFILECOMPLETEDEVENTARGS_GET_RESULT_OFFSET))(this);
		}
	};
}
