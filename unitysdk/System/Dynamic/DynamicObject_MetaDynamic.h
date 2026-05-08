#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/DynamicMetaObject.h"

namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Dynamic { class BinaryOperationBinder; }
namespace System::Dynamic { class BindingRestrictions; }
namespace System::Dynamic { class ConvertBinder; }
namespace System::Dynamic { class CreateInstanceBinder; }
namespace System::Dynamic { class DeleteIndexBinder; }
namespace System::Dynamic { class DeleteMemberBinder; }
namespace System::Dynamic { class DynamicObject; }
namespace System::Dynamic { class GetIndexBinder; }
namespace System::Dynamic { class GetMemberBinder; }
namespace System::Dynamic { class InvokeBinder; }
namespace System::Dynamic { class InvokeMemberBinder; }
namespace System::Dynamic { class SetIndexBinder; }
namespace System::Dynamic { class SetMemberBinder; }
namespace System::Dynamic { class UnaryOperationBinder; }
namespace System::Dynamic { template <typename T> class DynamicObject_MetaDynamic_Fallback_1; }
namespace System::Linq::Expressions { class ConstantExpression; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDBINARYOPERATION_OFFSET UNITYSDK_OFFSET(0x1A3BFC80)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDCONVERT_OFFSET UNITYSDK_OFFSET(0x1A3BF4A0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A3BF900)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDDELETEINDEX_OFFSET UNITYSDK_OFFSET(0x1A3C04A0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDDELETEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A3BF280)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDGETINDEX_OFFSET UNITYSDK_OFFSET(0x1A3C0120)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDGETMEMBER_OFFSET UNITYSDK_OFFSET(0x1A3BED00)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A3BF6F0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A3BFAC0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDSETINDEX_OFFSET UNITYSDK_OFFSET(0x1A3C02E0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDSETMEMBER_OFFSET UNITYSDK_OFFSET(0x1A3BF0C0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDUNARYOPERATION_OFFSET UNITYSDK_OFFSET(0x1A3BFED0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_GETCONVERTEDARGS_OFFSET UNITYSDK_OFFSET(0x1A3C0640)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_GETLIMITEDSELF_OFFSET UNITYSDK_OFFSET(0x1A3C1340)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_GETRESTRICTIONS_OFFSET UNITYSDK_OFFSET(0x1A3C12E0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A3C1270)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_ISOVERRIDDEN_OFFSET UNITYSDK_OFFSET(0x1A3BEEB0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_REFERENCEARGASSIGN_OFFSET UNITYSDK_OFFSET(0x1A3C0990)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3C1490)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3BEC60)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicObject_MetaDynamic_TypeDefinitionIndex = 4981;

	class DynamicObject_MetaDynamic : public ::System::Dynamic::DynamicMetaObject
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Expression*>** StaticGet_s_noArgs()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Expression*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObject_MetaDynamic_TypeDefinitionIndex)->GetStaticField(0x4900);
		}

		::System::Void _ctor(::System::Linq::Expressions::Expression* expression, ::System::Dynamic::DynamicObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Dynamic::DynamicObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC__CTOR_OFFSET))(this, expression, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC__CCTOR_OFFSET))();
		}

		::System::Dynamic::DynamicMetaObject* BindGetMember(::System::Dynamic::GetMemberBinder* binder)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::GetMemberBinder*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDGETMEMBER_OFFSET))(this, binder);
		}

		::System::Dynamic::DynamicMetaObject* BindSetMember(::System::Dynamic::SetMemberBinder* binder, ::System::Dynamic::DynamicMetaObject* value)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::SetMemberBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDSETMEMBER_OFFSET))(this, binder, value);
		}

		::System::Dynamic::DynamicMetaObject* BindDeleteMember(::System::Dynamic::DeleteMemberBinder* binder)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DeleteMemberBinder*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDDELETEMEMBER_OFFSET))(this, binder);
		}

		::System::Dynamic::DynamicMetaObject* BindConvert(::System::Dynamic::ConvertBinder* binder)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::ConvertBinder*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDCONVERT_OFFSET))(this, binder);
		}

		::System::Dynamic::DynamicMetaObject* BindInvokeMember(::System::Dynamic::InvokeMemberBinder* binder, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::InvokeMemberBinder*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDINVOKEMEMBER_OFFSET))(this, binder, args);
		}

		::System::Dynamic::DynamicMetaObject* BindCreateInstance(::System::Dynamic::CreateInstanceBinder* binder, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::CreateInstanceBinder*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDCREATEINSTANCE_OFFSET))(this, binder, args);
		}

		::System::Dynamic::DynamicMetaObject* BindInvoke(::System::Dynamic::InvokeBinder* binder, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* args)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::InvokeBinder*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDINVOKE_OFFSET))(this, binder, args);
		}

		::System::Dynamic::DynamicMetaObject* BindBinaryOperation(::System::Dynamic::BinaryOperationBinder* binder, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::BinaryOperationBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDBINARYOPERATION_OFFSET))(this, binder, arg);
		}

		::System::Dynamic::DynamicMetaObject* BindUnaryOperation(::System::Dynamic::UnaryOperationBinder* binder)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::UnaryOperationBinder*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDUNARYOPERATION_OFFSET))(this, binder);
		}

		::System::Dynamic::DynamicMetaObject* BindGetIndex(::System::Dynamic::GetIndexBinder* binder, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* indexes)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::GetIndexBinder*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDGETINDEX_OFFSET))(this, binder, indexes);
		}

		::System::Dynamic::DynamicMetaObject* BindSetIndex(::System::Dynamic::SetIndexBinder* binder, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* indexes, ::System::Dynamic::DynamicMetaObject* value)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::SetIndexBinder*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDSETINDEX_OFFSET))(this, binder, indexes, value);
		}

		::System::Dynamic::DynamicMetaObject* BindDeleteIndex(::System::Dynamic::DeleteIndexBinder* binder, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* indexes)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DeleteIndexBinder*, ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_BINDDELETEINDEX_OFFSET))(this, binder, indexes);
		}

		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetConvertedArgs(::Il2CppArray<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_GETCONVERTEDARGS_OFFSET))(args);
		}

		static ::System::Linq::Expressions::Expression* ReferenceArgAssign(::System::Linq::Expressions::Expression* callArgs, ::Il2CppArray<::System::Linq::Expressions::Expression*>* args)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_REFERENCEARGASSIGN_OFFSET))(callArgs, args);
		}

		::System::Boolean IsOverridden(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_ISOVERRIDDEN_OFFSET))(this, method);
		}

		::System::Dynamic::BindingRestrictions* GetRestrictions()
		{
			return ((::System::Dynamic::BindingRestrictions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_GETRESTRICTIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetLimitedSelf()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_GETLIMITEDSELF_OFFSET))(this);
		}

		::System::Dynamic::DynamicObject* get_Value()
		{
			return ((::System::Dynamic::DynamicObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC_GET_VALUE_OFFSET))(this);
		}
	};
}
