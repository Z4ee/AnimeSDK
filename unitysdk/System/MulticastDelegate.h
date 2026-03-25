#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Delegate.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_MULTICASTDELEGATE_COMBINEIMPL_OFFSET UNITYSDK_OFFSET(0x16355DD0)
#define SYSTEM_MULTICASTDELEGATE_DYNAMICINVOKEIMPL_OFFSET UNITYSDK_OFFSET(0x163558D0)
#define SYSTEM_MULTICASTDELEGATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x16355970)
#define SYSTEM_MULTICASTDELEGATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16355B20)
#define SYSTEM_MULTICASTDELEGATE_GETINVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x16355C60)
#define SYSTEM_MULTICASTDELEGATE_GETMETHODIMPL_OFFSET UNITYSDK_OFFSET(0x16355B90)
#define SYSTEM_MULTICASTDELEGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x163558C0)
#define SYSTEM_MULTICASTDELEGATE_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x163561C0)
#define SYSTEM_MULTICASTDELEGATE_REMOVEIMPL_OFFSET UNITYSDK_OFFSET(0x16356360)

namespace System
{
	inline static constexpr unsigned int MulticastDelegate_TypeDefinitionIndex = 408;

	class MulticastDelegate : public ::System::Delegate
	{
	public:
		::Il2CppArray<::System::Delegate*>* delegates; // 0x68

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Object* DynamicInvokeImpl(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_DYNAMICINVOKEIMPL_OFFSET))(this, args);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_EQUALS_OFFSET))(this, obj);
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

		::System::Delegate* CombineImpl(::System::Delegate* follow)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_COMBINEIMPL_OFFSET))(this, follow);
		}

		::System::Int32 LastIndexOf(::Il2CppArray<::System::Delegate*>* haystack, ::Il2CppArray<::System::Delegate*>* needle)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Delegate*>*, ::Il2CppArray<::System::Delegate*>*))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_LASTINDEXOF_OFFSET))(this, haystack, needle);
		}

		::System::Delegate* RemoveImpl(::System::Delegate* value)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTDELEGATE_REMOVEIMPL_OFFSET))(this, value);
		}
	};
}
