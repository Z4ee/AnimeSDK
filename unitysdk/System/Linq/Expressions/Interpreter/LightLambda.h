#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Dynamic::Utils { template <typename T1, typename T2> class CacheDict_2; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }
namespace System::Linq::Expressions::Interpreter { class Interpreter; }
namespace System::Linq::Expressions::Interpreter { class LightDelegateCreator; }
namespace System::Runtime::CompilerServices { class IStrongBox; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_CREATECUSTOMDELEGATE_OFFSET UNITYSDK_OFFSET(0x19F269A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_GETRUNDELEGATECTOR_OFFSET UNITYSDK_OFFSET(0x19F25BD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_MAKEDELEGATE_OFFSET UNITYSDK_OFFSET(0x19F258E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_MAKEFRAME_OFFSET UNITYSDK_OFFSET(0x19F25B70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_MAKERUNDELEGATECTOR_OFFSET UNITYSDK_OFFSET(0x19F25D70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_RUNVOID0_OFFSET UNITYSDK_OFFSET(0x19F25970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_RUNVOID_OFFSET UNITYSDK_OFFSET(0x19EF8A00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_RUN_OFFSET UNITYSDK_OFFSET(0x19EF8600)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F27980)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F258B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LightLambda_TypeDefinitionIndex = 3481;

	class LightLambda : public ::System::Object
	{
	public:
		static ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>*>** StaticGet__runCache()
		{
			return (::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>*>**)Il2CppClass::FromTypeDefinitionIndex(LightLambda_TypeDefinitionIndex)->GetStaticField(0x13130);
		}
		::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* _closure; // 0x10
		::System::Linq::Expressions::Interpreter::Interpreter* _interpreter; // 0x18
		::System::Linq::Expressions::Interpreter::LightDelegateCreator* _delegateCreator; // 0x20

		::System::Void _ctor(::System::Linq::Expressions::Interpreter::LightDelegateCreator* delegateCreator, ::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>* closure)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightDelegateCreator*, ::Il2CppArray<::System::Runtime::CompilerServices::IStrongBox*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA__CTOR_OFFSET))(this, delegateCreator, closure);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA__CCTOR_OFFSET))();
		}

		::System::Void RunVoid0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_RUNVOID0_OFFSET))(this);
		}

		static ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>* GetRunDelegateCtor(::System::Type* delegateType)
		{
			return ((::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_GETRUNDELEGATECTOR_OFFSET))(delegateType);
		}

		static ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>* MakeRunDelegateCtor(::System::Type* delegateType)
		{
			return ((::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_MAKERUNDELEGATECTOR_OFFSET))(delegateType);
		}

		::System::Delegate* CreateCustomDelegate(::System::Type* delegateType)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_CREATECUSTOMDELEGATE_OFFSET))(this, delegateType);
		}

		::System::Delegate* MakeDelegate(::System::Type* delegateType)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_MAKEDELEGATE_OFFSET))(this, delegateType);
		}

		::System::Linq::Expressions::Interpreter::InterpretedFrame* MakeFrame()
		{
			return ((::System::Linq::Expressions::Interpreter::InterpretedFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_MAKEFRAME_OFFSET))(this);
		}

		::System::Object* Run(::Il2CppArray<::System::Object*>* arguments)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_RUN_OFFSET))(this, arguments);
		}

		::System::Object* RunVoid(::Il2CppArray<::System::Object*>* arguments)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTLAMBDA_RUNVOID_OFFSET))(this, arguments);
		}
	};
}
