#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Delegate.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_MULTICASTDELEGATE_COMBINEIMPL_OFFSET UNITYSDK_OFFSET(0x1B87A2A0)
#define SYSTEM_MULTICASTDELEGATE_DYNAMICINVOKEIMPL_OFFSET UNITYSDK_OFFSET(0x1B879DC0)
#define SYSTEM_MULTICASTDELEGATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B879EE0)
#define SYSTEM_MULTICASTDELEGATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B87A080)
#define SYSTEM_MULTICASTDELEGATE_GETINVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x1B87A150)
#define SYSTEM_MULTICASTDELEGATE_GETMETHODIMPL_OFFSET UNITYSDK_OFFSET(0x1B87A090)
#define SYSTEM_MULTICASTDELEGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B879DB0)
#define SYSTEM_MULTICASTDELEGATE_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x1B87A5F0)
#define SYSTEM_MULTICASTDELEGATE_REMOVEIMPL_OFFSET UNITYSDK_OFFSET(0x1B87A850)

namespace System
{
	inline static constexpr unsigned int MulticastDelegate_TypeDefinitionIndex = 407;

	class MulticastDelegate : public ::System::Delegate
	{
	public:
		::Il2CppArray<::System::Delegate*>* delegates; // 0x68

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Object* DynamicInvokeImpl(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_DYNAMICINVOKEIMPL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_GETHASHCODE_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetMethodImpl()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_GETMETHODIMPL_OFFSET))(this);
		}

		::Il2CppArray<::System::Delegate*>* GetInvocationList()
		{
			return ((::Il2CppArray<::System::Delegate*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_GETINVOCATIONLIST_OFFSET))(this);
		}

		::System::Delegate* CombineImpl(::System::Delegate* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_COMBINEIMPL_OFFSET))(this, a1);
		}

		::System::Int32 LastIndexOf(::Il2CppArray<::System::Delegate*>* a1, ::Il2CppArray<::System::Delegate*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Delegate*>*, ::Il2CppArray<::System::Delegate*>*))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_LASTINDEXOF_OFFSET))(this, a1, a2);
		}

		::System::Delegate* RemoveImpl(::System::Delegate* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_REMOVEIMPL_OFFSET))(this, a1);
		}
	};
}
