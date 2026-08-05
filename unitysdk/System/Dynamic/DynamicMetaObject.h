#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Dynamic { class BinaryOperationBinder; }
namespace System::Dynamic { class BindingRestrictions; }
namespace System::Dynamic { class ConvertBinder; }
namespace System::Dynamic { class CreateInstanceBinder; }
namespace System::Dynamic { class DeleteIndexBinder; }
namespace System::Dynamic { class DeleteMemberBinder; }
namespace System::Dynamic { class GetIndexBinder; }
namespace System::Dynamic { class GetMemberBinder; }
namespace System::Dynamic { class InvokeBinder; }
namespace System::Dynamic { class InvokeMemberBinder; }
namespace System::Dynamic { class SetIndexBinder; }
namespace System::Dynamic { class SetMemberBinder; }
namespace System::Dynamic { class UnaryOperationBinder; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDBINARYOPERATION_OFFSET UNITYSDK_OFFSET(0x1F599E60)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDCONVERT_OFFSET UNITYSDK_OFFSET(0x1F599670)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F599CF0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDDELETEINDEX_OFFSET UNITYSDK_OFFSET(0x1F599AB0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDDELETEMEMBER_OFFSET UNITYSDK_OFFSET(0x1F599880)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDGETINDEX_OFFSET UNITYSDK_OFFSET(0x1F599930)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDGETMEMBER_OFFSET UNITYSDK_OFFSET(0x1F599720)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x1F599B70)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F599C30)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDSETINDEX_OFFSET UNITYSDK_OFFSET(0x1F5999F0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDSETMEMBER_OFFSET UNITYSDK_OFFSET(0x1F5997C0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDUNARYOPERATION_OFFSET UNITYSDK_OFFSET(0x1F599DB0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_CREATE_OFFSET UNITYSDK_OFFSET(0x1F59A130)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GETEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1F599F20)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1F599520)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_LIMITTYPE_OFFSET UNITYSDK_OFFSET(0x1F5995C0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_RESTRICTIONS_OFFSET UNITYSDK_OFFSET(0x1F599530)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_RUNTIMETYPE_OFFSET UNITYSDK_OFFSET(0x1F599540)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F59A3B0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F599430)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F599350)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicMetaObject_TypeDefinitionIndex = 4977;

	class DynamicMetaObject : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>** StaticGet_EmptyMetaObjects()
		{
			return (::Il2CppArray<::System::Dynamic::DynamicMetaObject*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicMetaObject_TypeDefinitionIndex)->GetStaticField(0x4300);
		}
		::System::Object* _Value_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Expression_k__BackingField; // 0x18
		::System::Dynamic::BindingRestrictions* _Restrictions_k__BackingField; // 0x20
		::System::Boolean _HasValue_k__BackingField; // 0x28

		::System::Void _ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::BindingRestrictions* restrictions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Dynamic::BindingRestrictions*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT__CTOR_OFFSET))(this, expression, restrictions);
		}

		::System::Void _ctor_1(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::BindingRestrictions* restrictions, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Dynamic::BindingRestrictions*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT__CTOR_1_OFFSET))(this, expression, restrictions, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT__CCTOR_OFFSET))();
		}

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Dynamic::BindingRestrictions* get_Restrictions()
		{
			return ((::System::Dynamic::BindingRestrictions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_RESTRICTIONS_OFFSET))(this);
		}

		::System::Type* get_RuntimeType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_RUNTIMETYPE_OFFSET))(this);
		}

		::System::Type* get_LimitType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GET_LIMITTYPE_OFFSET))(this);
		}

		::System::Dynamic::DynamicMetaObject* BindConvert(::System::Dynamic::ConvertBinder* binder)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::ConvertBinder*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDCONVERT_OFFSET))(this, binder);
		}

		::System::Dynamic::DynamicMetaObject* BindGetMember(::System::Dynamic::GetMemberBinder* binder)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::GetMemberBinder*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDGETMEMBER_OFFSET))(this, binder);
		}

		::System::Dynamic::DynamicMetaObject* BindSetMember(::System::Dynamic::SetMemberBinder* binder, ::System::Dynamic::DynamicMetaObject* value)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::SetMemberBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDSETMEMBER_OFFSET))(this, binder, value);
		}

		::System::Dynamic::DynamicMetaObject* BindDeleteMember(::System::Dynamic::DeleteMemberBinder* binder)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DeleteMemberBinder*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDDELETEMEMBER_OFFSET))(this, binder);
		}

		::System::Dynamic::DynamicMetaObject* BindGetIndex(::System::Dynamic::GetIndexBinder* binder, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* indexes)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::GetIndexBinder*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDGETINDEX_OFFSET))(this, binder, indexes);
		}

		::System::Dynamic::DynamicMetaObject* BindSetIndex(::System::Dynamic::SetIndexBinder* binder, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* indexes, ::System::Dynamic::DynamicMetaObject* value)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::SetIndexBinder*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDSETINDEX_OFFSET))(this, binder, indexes, value);
		}

		::System::Dynamic::DynamicMetaObject* BindDeleteIndex(::System::Dynamic::DeleteIndexBinder* binder, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* indexes)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DeleteIndexBinder*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDDELETEINDEX_OFFSET))(this, binder, indexes);
		}

		::System::Dynamic::DynamicMetaObject* BindInvokeMember(::System::Dynamic::InvokeMemberBinder* binder, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::InvokeMemberBinder*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDINVOKEMEMBER_OFFSET))(this, binder, args);
		}

		::System::Dynamic::DynamicMetaObject* BindInvoke(::System::Dynamic::InvokeBinder* binder, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::InvokeBinder*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDINVOKE_OFFSET))(this, binder, args);
		}

		::System::Dynamic::DynamicMetaObject* BindCreateInstance(::System::Dynamic::CreateInstanceBinder* binder, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::CreateInstanceBinder*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDCREATEINSTANCE_OFFSET))(this, binder, args);
		}

		::System::Dynamic::DynamicMetaObject* BindUnaryOperation(::System::Dynamic::UnaryOperationBinder* binder)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::UnaryOperationBinder*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDUNARYOPERATION_OFFSET))(this, binder);
		}

		::System::Dynamic::DynamicMetaObject* BindBinaryOperation(::System::Dynamic::BinaryOperationBinder* binder, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::BinaryOperationBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_BINDBINARYOPERATION_OFFSET))(this, binder, arg);
		}

		static ::Il2CppArray<::System::Linq::Expressions::Expression*>* GetExpressions(::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* objects)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Expression*>*(*)(::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_GETEXPRESSIONS_OFFSET))(objects);
		}

		static ::System::Dynamic::DynamicMetaObject* Create(::System::Object* value, ::System::Linq::Expressions::Expression* expression)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::System::Object*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECT_CREATE_OFFSET))(value, expression);
		}
	};
}
