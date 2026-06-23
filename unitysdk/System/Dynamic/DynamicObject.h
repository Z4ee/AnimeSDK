#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic { class BinaryOperationBinder; }
namespace System::Dynamic { class ConvertBinder; }
namespace System::Dynamic { class CreateInstanceBinder; }
namespace System::Dynamic { class DeleteIndexBinder; }
namespace System::Dynamic { class DeleteMemberBinder; }
namespace System::Dynamic { class DynamicMetaObject; }
namespace System::Dynamic { class GetIndexBinder; }
namespace System::Dynamic { class GetMemberBinder; }
namespace System::Dynamic { class InvokeBinder; }
namespace System::Dynamic { class InvokeMemberBinder; }
namespace System::Dynamic { class SetIndexBinder; }
namespace System::Dynamic { class SetMemberBinder; }
namespace System::Dynamic { class UnaryOperationBinder; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_DYNAMIC_DYNAMICOBJECT_GETMETAOBJECT_OFFSET UNITYSDK_OFFSET(0x1E38BD00)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYBINARYOPERATION_OFFSET UNITYSDK_OFFSET(0x1E38BCB0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYCONVERT_OFFSET UNITYSDK_OFFSET(0x1E38BC80)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E38BC90)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYDELETEINDEX_OFFSET UNITYSDK_OFFSET(0x1E38BCF0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYDELETEMEMBER_OFFSET UNITYSDK_OFFSET(0x1E38BC60)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYGETINDEX_OFFSET UNITYSDK_OFFSET(0x1E38BCD0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYGETMEMBER_OFFSET UNITYSDK_OFFSET(0x1E38BC40)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x1E38BC70)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYINVOKE_OFFSET UNITYSDK_OFFSET(0x1E38BCA0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYSETINDEX_OFFSET UNITYSDK_OFFSET(0x1E38BCE0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYSETMEMBER_OFFSET UNITYSDK_OFFSET(0x1E38BC50)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYUNARYOPERATION_OFFSET UNITYSDK_OFFSET(0x1E38BCC0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E38BC30)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicObject_TypeDefinitionIndex = 4979;

	class DynamicObject : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetMember(::System::Dynamic::GetMemberBinder* binder, ::System::Object*& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Dynamic::GetMemberBinder*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYGETMEMBER_OFFSET))(this, binder, result);
		}

		::System::Boolean TrySetMember(::System::Dynamic::SetMemberBinder* binder, ::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Dynamic::SetMemberBinder*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYSETMEMBER_OFFSET))(this, binder, value);
		}

		::System::Boolean TryDeleteMember(::System::Dynamic::DeleteMemberBinder* binder)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Dynamic::DeleteMemberBinder*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYDELETEMEMBER_OFFSET))(this, binder);
		}

		::System::Boolean TryInvokeMember(::System::Dynamic::InvokeMemberBinder* binder, ::Il2CppArray<::System::Object*>* args, ::System::Object*& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Dynamic::InvokeMemberBinder*, ::Il2CppArray<::System::Object*>*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYINVOKEMEMBER_OFFSET))(this, binder, args, result);
		}

		::System::Boolean TryConvert(::System::Dynamic::ConvertBinder* binder, ::System::Object*& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Dynamic::ConvertBinder*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYCONVERT_OFFSET))(this, binder, result);
		}

		::System::Boolean TryCreateInstance(::System::Dynamic::CreateInstanceBinder* binder, ::Il2CppArray<::System::Object*>* args, ::System::Object*& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Dynamic::CreateInstanceBinder*, ::Il2CppArray<::System::Object*>*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYCREATEINSTANCE_OFFSET))(this, binder, args, result);
		}

		::System::Boolean TryInvoke(::System::Dynamic::InvokeBinder* binder, ::Il2CppArray<::System::Object*>* args, ::System::Object*& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Dynamic::InvokeBinder*, ::Il2CppArray<::System::Object*>*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYINVOKE_OFFSET))(this, binder, args, result);
		}

		::System::Boolean TryBinaryOperation(::System::Dynamic::BinaryOperationBinder* binder, ::System::Object* arg, ::System::Object*& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Dynamic::BinaryOperationBinder*, ::System::Object*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYBINARYOPERATION_OFFSET))(this, binder, arg, result);
		}

		::System::Boolean TryUnaryOperation(::System::Dynamic::UnaryOperationBinder* binder, ::System::Object*& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Dynamic::UnaryOperationBinder*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYUNARYOPERATION_OFFSET))(this, binder, result);
		}

		::System::Boolean TryGetIndex(::System::Dynamic::GetIndexBinder* binder, ::Il2CppArray<::System::Object*>* indexes, ::System::Object*& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Dynamic::GetIndexBinder*, ::Il2CppArray<::System::Object*>*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYGETINDEX_OFFSET))(this, binder, indexes, result);
		}

		::System::Boolean TrySetIndex(::System::Dynamic::SetIndexBinder* binder, ::Il2CppArray<::System::Object*>* indexes, ::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Dynamic::SetIndexBinder*, ::Il2CppArray<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYSETINDEX_OFFSET))(this, binder, indexes, value);
		}

		::System::Boolean TryDeleteIndex(::System::Dynamic::DeleteIndexBinder* binder, ::Il2CppArray<::System::Object*>* indexes)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Dynamic::DeleteIndexBinder*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_TRYDELETEINDEX_OFFSET))(this, binder, indexes);
		}

		::System::Dynamic::DynamicMetaObject* GetMetaObject(::System::Linq::Expressions::Expression* parameter)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_GETMETAOBJECT_OFFSET))(this, parameter);
		}
	};
}
