#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Reflection/MethodBase.h"

namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class ICustomAttributeProvider; }

#define SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_1_OFFSET UNITYSDK_OFFSET(0x1954BDE0)
#define SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1954BD80)
#define SYSTEM_REFLECTION_METHODINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1954BBF0)
#define SYSTEM_REFLECTION_METHODINFO_GETBASEMETHOD_OFFSET UNITYSDK_OFFSET(0x1954BE40)
#define SYSTEM_REFLECTION_METHODINFO_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1954BC60)
#define SYSTEM_REFLECTION_METHODINFO_GETGENERICMETHODDEFINITION_OFFSET UNITYSDK_OFFSET(0x1954BCC0)
#define SYSTEM_REFLECTION_METHODINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1953A270)
#define SYSTEM_REFLECTION_METHODINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1954BC00)
#define SYSTEM_REFLECTION_METHODINFO_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1954BC10)
#define SYSTEM_REFLECTION_METHODINFO_MAKEGENERICMETHOD_OFFSET UNITYSDK_OFFSET(0x1954BD20)
#define SYSTEM_REFLECTION_METHODINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x195398B0)
#define SYSTEM_REFLECTION_METHODINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19539DF0)
#define SYSTEM_REFLECTION_METHODINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1954BBE0)

namespace System::Reflection
{
	inline static constexpr unsigned int MethodInfo_TypeDefinitionIndex = 552;

	class MethodInfo : public ::System::Reflection::MethodBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO__CTOR_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Reflection::MethodInfo* left, ::System::Reflection::MethodInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::MethodInfo* left, ::System::Reflection::MethodInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Reflection::MemberTypes get_MemberType()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Type* get_ReturnType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GET_RETURNTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetGenericArguments()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GETGENERICARGUMENTS_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetGenericMethodDefinition()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GETGENERICMETHODDEFINITION_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* MakeGenericMethod(::Il2CppArray<::System::Type*>* typeArguments)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_MAKEGENERICMETHOD_OFFSET))(this, typeArguments);
		}

		::System::Delegate* CreateDelegate(::System::Type* delegateType)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_OFFSET))(this, delegateType);
		}

		::System::Delegate* CreateDelegate_1(::System::Type* delegateType, ::System::Object* target)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_1_OFFSET))(this, delegateType, target);
		}

		::System::Reflection::MethodInfo* GetBaseMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GETBASEMETHOD_OFFSET))(this);
		}
	};
}
