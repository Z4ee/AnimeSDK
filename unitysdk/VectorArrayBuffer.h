#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ComputeBufferMode.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class ComputeBuffer; }

#define VECTORARRAYBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AF6B480)
#define VECTORARRAYBUFFER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AF6AEC0)
#define VECTORARRAYBUFFER_GET_OFFSET UNITYSDK_OFFSET(0x1AF6B7E0)
#define VECTORARRAYBUFFER_NEW_OFFSET UNITYSDK_OFFSET(0x1AF6AEE0)
#define VECTORARRAYBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1AF6B240)
#define VECTORARRAYBUFFER_SET_1_OFFSET UNITYSDK_OFFSET(0x1AF6B620)
#define VECTORARRAYBUFFER_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AF6AED0)
#define VECTORARRAYBUFFER_SET_OFFSET UNITYSDK_OFFSET(0x1AF6B540)
#define VECTORARRAYBUFFER_SYNCTOGPUIFDIRTY_OFFSET UNITYSDK_OFFSET(0x1AF6B770)
#define VECTORARRAYBUFFER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF6B960)
#define VECTORARRAYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6B160)

inline static constexpr unsigned int VectorArrayBuffer_TypeDefinitionIndex = 27252;

class VectorArrayBuffer : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Stack_1<::VectorArrayBuffer*>*>** StaticGet_Pools()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Stack_1<::VectorArrayBuffer*>*>**)Il2CppClass::FromTypeDefinitionIndex(VectorArrayBuffer_TypeDefinitionIndex)->GetStaticField(0x209B0);
	}
	::UnityEngine::ComputeBuffer* GPUBuffer; // 0x10
	::Il2CppArray<::UnityEngine::Vector4>* cpuData; // 0x18
	::System::Boolean dirty; // 0x20
	::System::Int32 _length_k__BackingField; // 0x24

	::System::Void _ctor(::System::String* name, ::System::Int32 length, ::UnityEngine::ComputeBufferMode bufferMode)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::UnityEngine::ComputeBufferMode))((::PBYTE)hIl2Cpp + VECTORARRAYBUFFER__CTOR_OFFSET))(this, name, length, bufferMode);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VECTORARRAYBUFFER__CCTOR_OFFSET))();
	}

	::System::Int32 get_length()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VECTORARRAYBUFFER_GET_LENGTH_OFFSET))(this);
	}

	::System::Void set_length(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + VECTORARRAYBUFFER_SET_LENGTH_OFFSET))(this, value);
	}

	static ::VectorArrayBuffer* New(::System::String* name, ::System::Int32 length, ::UnityEngine::ComputeBufferMode bufferMode)
	{
		return ((::VectorArrayBuffer*(*)(::System::String*, ::System::Int32, ::UnityEngine::ComputeBufferMode))((::PBYTE)hIl2Cpp + VECTORARRAYBUFFER_NEW_OFFSET))(name, length, bufferMode);
	}

	static ::System::Void Release(::VectorArrayBuffer*& buffer)
	{
		return ((::System::Void(*)(::VectorArrayBuffer*&))((::PBYTE)hIl2Cpp + VECTORARRAYBUFFER_RELEASE_OFFSET))(buffer);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VECTORARRAYBUFFER_FINALIZE_OFFSET))(this);
	}

	::System::Boolean Set(::System::Int32 index, ::UnityEngine::Vector4 value)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + VECTORARRAYBUFFER_SET_OFFSET))(this, index, value);
	}

	::System::Void Set_1(::Il2CppArray<::UnityEngine::Vector4>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + VECTORARRAYBUFFER_SET_1_OFFSET))(this, value);
	}

	::System::Void SyncToGPUIfDirty(::System::Boolean force)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + VECTORARRAYBUFFER_SYNCTOGPUIFDIRTY_OFFSET))(this, force);
	}

	::UnityEngine::Vector4 Get(::System::Int32 index)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + VECTORARRAYBUFFER_GET_OFFSET))(this, index);
	}
};
