#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class Type; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_02E7E41DEA045AD5_OFFSET UNITYSDK_OFFSET(0x1DDE9160)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_10872D5A7BDE6AF5_OFFSET UNITYSDK_OFFSET(0x1DDE9330)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_1FC0B2F39686D047_OFFSET UNITYSDK_OFFSET(0x1DDE9130)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_265ECFC30C5B0EEF_OFFSET UNITYSDK_OFFSET(0x1DDE8D60)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_2D9A8F3394962A5B_OFFSET UNITYSDK_OFFSET(0x9DAEA0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_33D58E766C7B00FE_1_OFFSET UNITYSDK_OFFSET(0x1DDE9040)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_33D58E766C7B00FE_OFFSET UNITYSDK_OFFSET(0x1DDE8E60)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_1_OFFSET UNITYSDK_OFFSET(0x1DDE8ED0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_2_OFFSET UNITYSDK_OFFSET(0x1DDE8F90)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_3_OFFSET UNITYSDK_OFFSET(0x1DDE8EE0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_4_OFFSET UNITYSDK_OFFSET(0x1DDE9010)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_OFFSET UNITYSDK_OFFSET(0x1DDE8EB0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_41F560F5C23DB7E4_OFFSET UNITYSDK_OFFSET(0x1DDE9030)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_4B5CBFE43FBBA4A9_OFFSET UNITYSDK_OFFSET(0x3CB9B0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_4EAC41C8407E0F15_OFFSET UNITYSDK_OFFSET(0x1DDE8FA0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_56B42DCB4C2CE4F6_OFFSET UNITYSDK_OFFSET(0x9DAE80)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_59FD75ABB3EBD456_OFFSET UNITYSDK_OFFSET(0x1DDE9240)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_643F02B697786BA6_OFFSET UNITYSDK_OFFSET(0x1DDE92A0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_67F6AE7F9001053A_OFFSET UNITYSDK_OFFSET(0x9DAEC0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_7289B051E4D48AE8_OFFSET UNITYSDK_OFFSET(0x1DDE8F50)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_8D3CAA3E8561FA03_1_OFFSET UNITYSDK_OFFSET(0x1DDE91D0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_8D3CAA3E8561FA03_2_OFFSET UNITYSDK_OFFSET(0x1DDE9300)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_8D3CAA3E8561FA03_OFFSET UNITYSDK_OFFSET(0x1DDE90E0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_92CF7E0F59557848_OFFSET UNITYSDK_OFFSET(0x259D70)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_98AA5ECEBC406964_OFFSET UNITYSDK_OFFSET(0x1DDE9200)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_9BB2E1286B8738B0_1_OFFSET UNITYSDK_OFFSET(0x1DDE8DA0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_9BB2E1286B8738B0_2_OFFSET UNITYSDK_OFFSET(0x1DDE9110)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_9BB2E1286B8738B0_OFFSET UNITYSDK_OFFSET(0x1DDE8D80)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_B1A5F67F55C20F2A_OFFSET UNITYSDK_OFFSET(0x324D50)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_B79F4C754405332D_OFFSET UNITYSDK_OFFSET(0x1DDE8F00)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_BA96C7EB570C3B63_OFFSET UNITYSDK_OFFSET(0x1DDE1470)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_C34B2CBA679A9D4C_OFFSET UNITYSDK_OFFSET(0x1DDE8FD0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x325570)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_E202EAEFDA3D0289_OFFSET UNITYSDK_OFFSET(0x1DDE90A0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_ED09B2FB0A09B0BE_OFFSET UNITYSDK_OFFSET(0x9DAEB0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_FDCBEF1BB6003C6C_1_OFFSET UNITYSDK_OFFSET(0x1DDE8E10)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_FDCBEF1BB6003C6C_OFFSET UNITYSDK_OFFSET(0x1DDE8DC0)

namespace System
{
	inline static constexpr unsigned int RuntimeTypeHandle_TypeDefinitionIndex = 409;

	struct alignas(8) RuntimeTypeHandle
	{
		::System::IntPtr value; // 0x10

		::System::Void Method_2_B1A5F67F55C20F2A(::System::IntPtr val)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_B1A5F67F55C20F2A_OFFSET))(this, val);
		}

		::System::Void Method_2_56B42DCB4C2CE4F6(::System::RuntimeType* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_56B42DCB4C2CE4F6_OFFSET))(this, type);
		}

		/*
		::System::Void Method_2_2D9A8F3394962A5B(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_2D9A8F3394962A5B_OFFSET))(this, info, context);
		}
		*/

		::System::IntPtr Method_2_92CF7E0F59557848()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_92CF7E0F59557848_OFFSET))(this);
		}

		/*
		::System::Void Method_2_ED09B2FB0A09B0BE(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_ED09B2FB0A09B0BE_OFFSET))(this, info, context);
		}
		*/

		::System::Boolean Method_2_67F6AE7F9001053A(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_67F6AE7F9001053A_OFFSET))(this, obj);
		}

		::System::Boolean Method_2_4B5CBFE43FBBA4A9(::System::RuntimeTypeHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_4B5CBFE43FBBA4A9_OFFSET))(this, handle);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		static ::System::Reflection::TypeAttributes Method_2_265ECFC30C5B0EEF(::System::RuntimeType* type)
		{
			return ((::System::Reflection::TypeAttributes(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_265ECFC30C5B0EEF_OFFSET))(type);
		}

		static ::System::Int32 Method_2_9BB2E1286B8738B0(::System::RuntimeType* type)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_9BB2E1286B8738B0_OFFSET))(type);
		}

		static ::System::Int32 Method_2_9BB2E1286B8738B0_1(::System::RuntimeType* type)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_9BB2E1286B8738B0_1_OFFSET))(type);
		}

		static ::System::Type* Method_2_FDCBEF1BB6003C6C(::System::RuntimeType* type)
		{
			return ((::System::Type*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_FDCBEF1BB6003C6C_OFFSET))(type);
		}

		static ::System::Type* Method_2_FDCBEF1BB6003C6C_1(::System::RuntimeType* type)
		{
			return ((::System::Type*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_FDCBEF1BB6003C6C_1_OFFSET))(type);
		}

		static ::System::Boolean Method_2_33D58E766C7B00FE(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_33D58E766C7B00FE_OFFSET))(type);
		}

		static ::System::Boolean Method_2_B79F4C754405332D(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_B79F4C754405332D_OFFSET))(type);
		}

		static ::System::Boolean Method_2_7289B051E4D48AE8(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_7289B051E4D48AE8_OFFSET))(type);
		}

		static ::System::Boolean Method_2_3ADD64610AC194BA(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_OFFSET))(type);
		}

		static ::System::Boolean Method_2_3ADD64610AC194BA_1(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_1_OFFSET))(type);
		}

		static ::System::Boolean Method_2_3ADD64610AC194BA_2(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_2_OFFSET))(type);
		}

		static ::System::Boolean Method_2_4EAC41C8407E0F15(::System::RuntimeType* type, ::System::Object* o)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_4EAC41C8407E0F15_OFFSET))(type, o);
		}

		static ::System::Boolean Method_2_3ADD64610AC194BA_3(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_3_OFFSET))(type);
		}

		static ::System::Boolean Method_2_C34B2CBA679A9D4C(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_C34B2CBA679A9D4C_OFFSET))(type);
		}

		static ::System::Boolean Method_2_3ADD64610AC194BA_4(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_3ADD64610AC194BA_4_OFFSET))(type);
		}

		static ::System::Boolean Method_2_41F560F5C23DB7E4(::System::RuntimeType* type, ::System::Boolean isGenericCOM)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_41F560F5C23DB7E4_OFFSET))(type, isGenericCOM);
		}

		static ::System::Boolean Method_2_33D58E766C7B00FE_1(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_33D58E766C7B00FE_1_OFFSET))(type);
		}

		static ::System::Boolean Method_2_E202EAEFDA3D0289(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_E202EAEFDA3D0289_OFFSET))(type);
		}

		static ::System::Boolean Method_2_8D3CAA3E8561FA03(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_8D3CAA3E8561FA03_OFFSET))(type);
		}

		static ::System::Int32 Method_2_9BB2E1286B8738B0_2(::System::RuntimeType* type)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_9BB2E1286B8738B0_2_OFFSET))(type);
		}

		static ::System::Reflection::RuntimeAssembly* Method_2_1FC0B2F39686D047(::System::RuntimeType* type)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_1FC0B2F39686D047_OFFSET))(type);
		}

		static ::System::RuntimeType* Method_2_02E7E41DEA045AD5(::System::RuntimeType* type)
		{
			return ((::System::RuntimeType*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_02E7E41DEA045AD5_OFFSET))(type);
		}

		static ::System::Reflection::RuntimeModule* Method_2_BA96C7EB570C3B63(::System::RuntimeType* type)
		{
			return ((::System::Reflection::RuntimeModule*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_BA96C7EB570C3B63_OFFSET))(type);
		}

		static ::System::Boolean Method_2_8D3CAA3E8561FA03_1(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_8D3CAA3E8561FA03_1_OFFSET))(type);
		}

		static ::System::RuntimeType* Method_2_98AA5ECEBC406964(::System::RuntimeType* type)
		{
			return ((::System::RuntimeType*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_98AA5ECEBC406964_OFFSET))(type);
		}

		static ::System::Boolean Method_2_59FD75ABB3EBD456(::System::RuntimeType* type, ::System::RuntimeType* target)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_59FD75ABB3EBD456_OFFSET))(type, target);
		}

		static ::System::Boolean Method_2_643F02B697786BA6(::System::Type* a, ::System::Type* b)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_643F02B697786BA6_OFFSET))(a, b);
		}

		static ::System::Boolean Method_2_8D3CAA3E8561FA03_2(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_8D3CAA3E8561FA03_2_OFFSET))(type);
		}

		static ::System::IntPtr Method_2_10872D5A7BDE6AF5(::System::RuntimeType* type)
		{
			return ((::System::IntPtr(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_10872D5A7BDE6AF5_OFFSET))(type);
		}
	};
}
