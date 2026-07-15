#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/DisposeUtility.h"
#include "unitysdk/UnityEngine/Rendering/GrowableBuffer_GrowMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_GROWABLEBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B0DAF50)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B0DACE0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B0F1BB0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_GETBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1B0F1BC0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_GETSRCBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0F1BD0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_1_OFFSET UNITYSDK_OFFSET(0x1B0DD850)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_2_OFFSET UNITYSDK_OFFSET(0x1B0F21E0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_3_OFFSET UNITYSDK_OFFSET(0x1B0F2290)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1B0DD8C0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_1_OFFSET UNITYSDK_OFFSET(0x1B0DBB50)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_2_OFFSET UNITYSDK_OFFSET(0x1B0DB100)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_3_OFFSET UNITYSDK_OFFSET(0x1B0DB130)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_4_OFFSET UNITYSDK_OFFSET(0x1B0DB260)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_5_OFFSET UNITYSDK_OFFSET(0x1B0F2120)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_6_OFFSET UNITYSDK_OFFSET(0x1B0F2180)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_7_OFFSET UNITYSDK_OFFSET(0x1B0DB4F0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_8_OFFSET UNITYSDK_OFFSET(0x1B0DB3C0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1B0DD570)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0F2600)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0DA9F0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__ENLARGEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0F2330)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__GETWRITEDATAPOINTER_OFFSET UNITYSDK_OFFSET(0x1B0F2440)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__RELEASEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0F2300)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUENOALIGN_OFFSET UNITYSDK_OFFSET(0x1B0F1E20)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1B0F24D0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_2_OFFSET UNITYSDK_OFFSET(0x1B0F1EB0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_3_OFFSET UNITYSDK_OFFSET(0x1B0F1FE0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1B0F1BE0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__WRITEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1B0F1D00)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__WRITE_OFFSET UNITYSDK_OFFSET(0x1B0F23A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GrowableBuffer_TypeDefinitionIndex = 34129;

	class GrowableBuffer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet__TmpBuffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(GrowableBuffer_TypeDefinitionIndex)->GetStaticField(0x46440);
		}
		::System::Int32 _Capacity; // 0x10
		::UnityEngine::Rendering::GrowableBuffer_GrowMode _GrowMode; // 0x14
		::System::Int32 _Size; // 0x18
		::System::Byte* _Buffer; // 0x20
		::UnityEngine::Rendering::DisposeUtility _Dispose; // 0x28
		::System::Int32 _GrowStepSize; // 0x2C

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Rendering::GrowableBuffer_GrowMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::GrowableBuffer_GrowMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_CLEAR_OFFSET))(this);
		}

		::System::Int32 GetBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_GETBUFFERSIZE_OFFSET))(this);
		}

		::System::Void* GetSrcBuffer()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_GETSRCBUFFER_OFFSET))(this);
		}

		::System::Void WriteValueType(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_OFFSET))(this, a1, a2);
		}

		::System::Void WriteValueType_1(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_1_OFFSET))(this, a1);
		}

		::System::Void WriteValueType_2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_2_OFFSET))(this, a1);
		}

		::System::Void WriteValueType_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_3_OFFSET))(this, a1);
		}

		::System::Void WriteValueType_4(::UnityEngine::Vector4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_4_OFFSET))(this, a1);
		}

		::System::Void WriteValueType_5(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_5_OFFSET))(this, a1);
		}

		::System::Void WriteValueType_6(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_6_OFFSET))(this, a1);
		}

		::System::Void WriteValueType_7(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_7_OFFSET))(this, a1);
		}

		::System::Void WriteValueType_8(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_8_OFFSET))(this, a1);
		}

		::System::Void WriteArrayType(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_OFFSET))(this, a1);
		}

		::System::Void WriteArrayType_1(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_1_OFFSET))(this, a1);
		}

		::System::Void WriteArrayType_2(::Il2CppArray<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_2_OFFSET))(this, a1);
		}

		::System::Void WriteArrayType_3(::Il2CppArray<::UnityEngine::Matrix4x4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_3_OFFSET))(this, a1);
		}

		::System::Void _ReleaseBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__RELEASEBUFFER_OFFSET))(this);
		}

		::System::Void _EnlargeBuffer(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__ENLARGEBUFFER_OFFSET))(this, a1, a2);
		}

		::System::Void _Write(::System::Byte* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__WRITE_OFFSET))(this, a1, a2);
		}

		::System::Byte* _GetWriteDataPointer(::System::Int32 a1)
		{
			return ((::System::Byte*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__GETWRITEDATAPOINTER_OFFSET))(this, a1);
		}

		::System::Void _WriteValueType(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__WRITEVALUETYPE_OFFSET))(this, a1);
		}

		::System::Void _SerializeValueNoAlign(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUENOALIGN_OFFSET))(this, a1, a2);
		}

		::System::Void _SerializeValue(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void _SerializeValue_1(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_1_OFFSET))(this, a1, a2);
		}

		::System::Void _SerializeValue_2(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_2_OFFSET))(this, a1, a2);
		}

		::System::Void _SerializeValue_3(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_3_OFFSET))(this, a1, a2);
		}
	};
}
