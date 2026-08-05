#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define TESTROTATIONMATRIX_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D5D34C0)
#define TESTROTATIONMATRIX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5D3DD0)
#define TESTROTATIONMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D3D80)

inline static constexpr unsigned int TestRotationMatrix_TypeDefinitionIndex = 84183;

class TestRotationMatrix : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_WorldToPlaneSpace2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TestRotationMatrix_TypeDefinitionIndex)->GetStaticField(0x10250);
	}
	static ::System::Int32* StaticGet_WorldToPlaneSpace()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TestRotationMatrix_TypeDefinitionIndex)->GetStaticField(0x10254);
	}
	::UnityEngine::GameObject* characterGO; // 0x18
	::UnityEngine::GameObject* planeGO; // 0x20
	::UnityEngine::GameObject* planeGO2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTROTATIONMATRIX__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TESTROTATIONMATRIX__CCTOR_OFFSET))();
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTROTATIONMATRIX_UPDATE_OFFSET))(this);
	}
};
