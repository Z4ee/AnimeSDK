#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/CallSiteBinder.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Dynamic { class DynamicMetaObject; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LabelTarget; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x1A3BDFD0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_CREATEARGUMENTMETAOBJECTS_OFFSET UNITYSDK_OFFSET(0x1A3BE710)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_GETUPDATEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1A3BEB10)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_GET_ISSTANDARDBINDER_OFFSET UNITYSDK_OFFSET(0x1A3BEC50)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1A3BDFA0)
#define SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3BDF50)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicMetaObjectBinder_TypeDefinitionIndex = 4979;

	class DynamicMetaObjectBinder : public ::System::Runtime::CompilerServices::CallSiteBinder
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER__CTOR_OFFSET))(this);
		}

		::System::Type* get_ReturnType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_GET_RETURNTYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Bind(::Il2CppArray<::System::Object*>* args, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters, ::System::Linq::Expressions::LabelTarget* returnLabel)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_BIND_OFFSET))(this, args, parameters, returnLabel);
		}

		static ::Il2CppArray<::System::Dynamic::DynamicMetaObject*>* CreateArgumentMetaObjects(::Il2CppArray<::System::Object*>* args, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters)
		{
			return ((::Il2CppArray<::System::Dynamic::DynamicMetaObject*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_CREATEARGUMENTMETAOBJECTS_OFFSET))(args, parameters);
		}

		::System::Linq::Expressions::Expression* GetUpdateExpression(::System::Type* type)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_GETUPDATEEXPRESSION_OFFSET))(this, type);
		}

		::System::Boolean get_IsStandardBinder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICMETAOBJECTBINDER_GET_ISSTANDARDBINDER_OFFSET))(this);
		}
	};
}
