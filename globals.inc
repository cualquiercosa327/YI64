# globally accessible functions and data
# these will be accessible by C code and show up in the .map file

.global osResetType
.global osAppNmiBuffer
.global mainproc
.global osSendMesg
.global osRecvMesg
.global sinf
.global osSpTaskStartGo
.global __osExceptionPreamble
.global bzero
.global __osLeoInterrupt
.global _osLeoAbnormalResume
.global __osLeoResume
.global osContInit
.global __osPiCreateAccessQueue
.global __osSiGetAccess
.global __osSiRelAccess
.global osCreateThread
.global osContStartReadData
.global osContGetReadData
.global __osPackReadData
.global osVirtualToPhysical
.global osWritebackDCache
.global osInitialize
.global osPiRawReadIo
.global __osSetSR
.global __osGetSR
.global __osSiRawStartDma
.global osViBlack
.global __osSiRawReadIo
.global guMtxIdentF
.global osViSetMode
.global guLookAtF
.global osGetCount
.global __osDevMgrMain
.global osSetEventMesg
.global sqrtf
.global osLeoDiskInit
.global memcpy
.global strlen
.global strchr
.global osCreateMesgQueue
.global osInvalICache
.global osSetThreadPri
.global osViSwapBuffer
.global osGetTime
.global __osTimerServicesInit
.global __osTimerInterrupt
.global __osSetTimerIntr
.global __osInsertTimer
.global osAiSetFrequency
.global guNormalize
.global bcopy
.global guOrthoF
.global __osDisableInt
.global __osRestoreInt
.global __osViInit
.global __osViSwapContext
.global cosf
.global osViSetSpecialFeatures
.global osViSetEvent
.global __osSetFpcCsr
.global osAiGetLength
.global osMapTLBRdb
.global osSetTimer
.global __osSiRawWriteIo
.global osStartThread
.global osClockRate
.global __OSGlobalIntMask
.global __osContPifRam
.global __osContLastCmd
.global __osMaxControllers
.global __osDiskHandle
.global EntryPoint
.global _sinf
.global _osSpTaskStartGo
.global _osCreateThread
.global _osContStartReadData
.global _osContGetReadData
.global _osVirtualToPhysical
.global _osInitialize
.global _sqrtf
.global _memcpy
.global _strlen
.global _strchr
.global _guNormalize
.global __guOrthoF
.global _cosf
.global _osStartThread

